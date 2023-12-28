#pragma once
#include "System/Net/Security/zzzz__AuthenticationLevel_impl.hpp"
#include "System/Security/Principal/zzzz__TokenImpersonationLevel_impl.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Net/Cache/zzzz__RequestCacheBinding_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Net/zzzz__TimerThread_def.hpp"
#include "System/Net/Cache/zzzz__RequestCachePolicy_def.hpp"
#include "System/Net/Cache/zzzz__RequestCacheProtocol_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Security/Principal/zzzz__WindowsIdentity_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/Net/zzzz__IWebRequestCreate_def.hpp"
//  Writing Method size for method: ::System::Net::__WebRequest__DesignerWebRequestCreate.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebRequest* (::System::Net::__WebRequest__DesignerWebRequestCreate::*)(::System::Uri*)>(
    &::System::Net::__WebRequest__DesignerWebRequestCreate::Create)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x29a4668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequest__DesignerWebRequestCreate*>::get(), "Create",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__WebRequest__DesignerWebRequestCreate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebRequest__DesignerWebRequestCreate::*)()>(
    &::System::Net::__WebRequest__DesignerWebRequestCreate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a4468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequest__DesignerWebRequestCreate*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Net::IWebRequestCreate"
constexpr System::Net::__WebRequest__DesignerWebRequestCreate::operator ::System::Net::IWebRequestCreate*() noexcept {
  return static_cast<::System::Net::IWebRequestCreate*>(static_cast<void*>(this));
}
inline ::System::Net::WebRequest* System::Net::__WebRequest__DesignerWebRequestCreate::Create(::System::Uri* uri) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequest__DesignerWebRequestCreate*>::get(), "Create",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebRequest*, false>(this, ___internal_method, uri);
}
inline ::System::Net::__WebRequest__DesignerWebRequestCreate* System::Net::__WebRequest__DesignerWebRequestCreate::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__WebRequest__DesignerWebRequestCreate*>());
}
inline void System::Net::__WebRequest__DesignerWebRequestCreate::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequest__DesignerWebRequestCreate*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::__WebRequest__DesignerWebRequestCreate::__WebRequest__DesignerWebRequestCreate() {}
//  Writing Method size for method: ::System::Net::__WebRequest____c__DisplayClass78_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebRequest____c__DisplayClass78_0::*)()>(
    &::System::Net::__WebRequest____c__DisplayClass78_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a3c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequest____c__DisplayClass78_0*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__WebRequest____c__DisplayClass78_0._GetRequestStreamAsync_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (::System::Net::__WebRequest____c__DisplayClass78_0::*)()>(
    &::System::Net::__WebRequest____c__DisplayClass78_0::_GetRequestStreamAsync_b__1)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x29a46bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequest____c__DisplayClass78_0*>::get(),
                                                                               "<GetRequestStreamAsync>b__1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Security::Principal::WindowsIdentity*& System::Net::__WebRequest____c__DisplayClass78_0::__get_currentUser() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentUser;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Principal::WindowsIdentity*> const& System::Net::__WebRequest____c__DisplayClass78_0::__get_currentUser() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentUser;
}
constexpr void System::Net::__WebRequest____c__DisplayClass78_0::__set_currentUser(::System::Security::Principal::WindowsIdentity* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentUser)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::WebRequest*& System::Net::__WebRequest____c__DisplayClass78_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebRequest*> const& System::Net::__WebRequest____c__DisplayClass78_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void System::Net::__WebRequest____c__DisplayClass78_0::__set___4__this(::System::Net::WebRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::__WebRequest____c__DisplayClass78_0* System::Net::__WebRequest____c__DisplayClass78_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__WebRequest____c__DisplayClass78_0*>());
}
inline void System::Net::__WebRequest____c__DisplayClass78_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequest____c__DisplayClass78_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* System::Net::__WebRequest____c__DisplayClass78_0::_GetRequestStreamAsync_b__1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequest____c__DisplayClass78_0*>::get(),
                                                                             "<GetRequestStreamAsync>b__1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::__WebRequest____c__DisplayClass78_0::__WebRequest____c__DisplayClass78_0() {}
//  Writing Method size for method: ::System::Net::__WebRequest____c__DisplayClass79_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebRequest____c__DisplayClass79_0::*)()>(
    &::System::Net::__WebRequest____c__DisplayClass79_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a3f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequest____c__DisplayClass79_0*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__WebRequest____c__DisplayClass79_0._GetResponseAsync_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* (
    ::System::Net::__WebRequest____c__DisplayClass79_0::*)()>(&::System::Net::__WebRequest____c__DisplayClass79_0::_GetResponseAsync_b__1)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x29a4a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequest____c__DisplayClass79_0*>::get(),
                                                                               "<GetResponseAsync>b__1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Security::Principal::WindowsIdentity*& System::Net::__WebRequest____c__DisplayClass79_0::__get_currentUser() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentUser;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Principal::WindowsIdentity*> const& System::Net::__WebRequest____c__DisplayClass79_0::__get_currentUser() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentUser;
}
constexpr void System::Net::__WebRequest____c__DisplayClass79_0::__set_currentUser(::System::Security::Principal::WindowsIdentity* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentUser)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::WebRequest*& System::Net::__WebRequest____c__DisplayClass79_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebRequest*> const& System::Net::__WebRequest____c__DisplayClass79_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void System::Net::__WebRequest____c__DisplayClass79_0::__set___4__this(::System::Net::WebRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::__WebRequest____c__DisplayClass79_0* System::Net::__WebRequest____c__DisplayClass79_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__WebRequest____c__DisplayClass79_0*>());
}
inline void System::Net::__WebRequest____c__DisplayClass79_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequest____c__DisplayClass79_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* System::Net::__WebRequest____c__DisplayClass79_0::_GetResponseAsync_b__1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequest____c__DisplayClass79_0*>::get(),
                                                                             "<GetResponseAsync>b__1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::__WebRequest____c__DisplayClass79_0::__WebRequest____c__DisplayClass79_0() {}
//  Writing Method size for method: ::System::Net::WebRequest.get_InternalSyncObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)()>(&::System::Net::WebRequest::get_InternalSyncObject)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x29a2ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "get_InternalSyncObject",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebRequest* (*)(::System::Uri*, bool)>(&::System::Net::WebRequest::Create)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x29a2d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "Create", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebRequest* (*)(::StringW)>(&::System::Net::WebRequest::Create)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x29a31a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "Create", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebRequest* (*)(::System::Uri*)>(&::System::Net::WebRequest::Create)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x29a327c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "Create", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_PrefixList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (*)()>(&::System::Net::WebRequest::get_PrefixList)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x29a300c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "get_PrefixList",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.PopulatePrefixList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (*)()>(&::System::Net::WebRequest::PopulatePrefixList)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x29a3358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "PopulatePrefixList",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29a3594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Net::WebRequest::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::WebRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a35b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequest::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::WebRequest::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29a35c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequest::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::WebRequest::GetObjectData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29a35cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_DefaultCachePolicy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Cache::RequestCachePolicy* (*)()>(&::System::Net::WebRequest::get_DefaultCachePolicy)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x29a35d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "get_DefaultCachePolicy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_CachePolicy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequest::*)(::System::Net::Cache::RequestCachePolicy*)>(
    &::System::Net::WebRequest::set_CachePolicy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29a3654;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.InternalSetCachePolicy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequest::*)(::System::Net::Cache::RequestCachePolicy*)>(
    &::System::Net::WebRequest::InternalSetCachePolicy)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x29a3658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "InternalSetCachePolicy", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCachePolicy*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_Method
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::get_Method)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29a3710;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_Method
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequest::*)(::StringW)>(&::System::Net::WebRequest::set_Method)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29a3734;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_RequestUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::get_RequestUri)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29a3758;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_ConnectionGroupName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequest::*)(::StringW)>(&::System::Net::WebRequest::set_ConnectionGroupName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29a377c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_Headers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::get_Headers)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29a37a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_ContentLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::get_ContentLength)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29a37c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_ContentLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequest::*)(int64_t)>(&::System::Net::WebRequest::set_ContentLength)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29a37e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_Credentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ICredentials* (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::get_Credentials)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29a380c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_Credentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequest::*)(::System::Net::ICredentials*)>(&::System::Net::WebRequest::set_Credentials)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29a3830;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_UseDefaultCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::get_UseDefaultCredentials)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29a3854;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_Proxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebProxy* (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::get_Proxy)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29a3878;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_Proxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequest::*)(::System::Net::IWebProxy*)>(&::System::Net::WebRequest::set_Proxy)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29a389c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_PreAuthenticate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequest::*)(bool)>(&::System::Net::WebRequest::set_PreAuthenticate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29a38c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::get_Timeout)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29a38e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequest::*)(int32_t)>(&::System::Net::WebRequest::set_Timeout)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29a3908;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.GetResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebResponse* (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::GetResponse)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29a392c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.BeginGetResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::Net::WebRequest::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::WebRequest::BeginGetResponse)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29a3950;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.EndGetResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebResponse* (::System::Net::WebRequest::*)(::System::IAsyncResult*)>(
    &::System::Net::WebRequest::EndGetResponse)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29a3974;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.BeginGetRequestStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::Net::WebRequest::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::WebRequest::BeginGetRequestStream)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29a3998;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.EndGetRequestStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Net::WebRequest::*)(::System::IAsyncResult*)>(
    &::System::Net::WebRequest::EndGetRequestStream)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29a39bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.GetRequestStreamAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (::System::Net::WebRequest::*)()>(
    &::System::Net::WebRequest::GetRequestStreamAsync)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x29a39e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.GetResponseAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* (::System::Net::WebRequest::*)()>(
    &::System::Net::WebRequest::GetResponseAsync)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x29a3cc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.SafeCaptureIdenity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Principal::WindowsIdentity* (::System::Net::WebRequest::*)()>(
    &::System::Net::WebRequest::SafeCaptureIdenity)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x29a3c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "SafeCaptureIdenity",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.Abort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequest::*)()>(&::System::Net::WebRequest::Abort)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29a3f50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_CacheProtocol
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Cache::RequestCacheProtocol* (::System::Net::WebRequest::*)()>(
    &::System::Net::WebRequest::get_CacheProtocol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a3f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "get_CacheProtocol",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.set_CacheProtocol
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequest::*)(::System::Net::Cache::RequestCacheProtocol*)>(
    &::System::Net::WebRequest::set_CacheProtocol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a3f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "set_CacheProtocol", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCacheProtocol*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest.get_InternalDefaultWebProxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebProxy* (*)()>(&::System::Net::WebRequest::get_InternalDefaultWebProxy)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x29a3f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "get_InternalDefaultWebProxy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest._GetRequestStreamAsync_b__78_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (::System::Net::WebRequest::*)()>(
    &::System::Net::WebRequest::_GetRequestStreamAsync_b__78_0)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x29a4470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                               "<GetRequestStreamAsync>b__78_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequest._GetResponseAsync_b__79_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* (::System::Net::WebRequest::*)()>(
    &::System::Net::WebRequest::_GetResponseAsync_b__79_0)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x29a456c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "<GetResponseAsync>b__79_0",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Net::WebRequest::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
constexpr ::System::Net::Security::AuthenticationLevel& System::Net::WebRequest::__get_m_AuthenticationLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AuthenticationLevel;
}
constexpr ::System::Net::Security::AuthenticationLevel const& System::Net::WebRequest::__get_m_AuthenticationLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AuthenticationLevel;
}
constexpr void System::Net::WebRequest::__set_m_AuthenticationLevel(::System::Net::Security::AuthenticationLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AuthenticationLevel = value;
}
constexpr ::System::Security::Principal::TokenImpersonationLevel& System::Net::WebRequest::__get_m_ImpersonationLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImpersonationLevel;
}
constexpr ::System::Security::Principal::TokenImpersonationLevel const& System::Net::WebRequest::__get_m_ImpersonationLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImpersonationLevel;
}
constexpr void System::Net::WebRequest::__set_m_ImpersonationLevel(::System::Security::Principal::TokenImpersonationLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ImpersonationLevel = value;
}
constexpr ::System::Net::Cache::RequestCachePolicy*& System::Net::WebRequest::__get_m_CachePolicy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachePolicy;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Cache::RequestCachePolicy*> const& System::Net::WebRequest::__get_m_CachePolicy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachePolicy;
}
constexpr void System::Net::WebRequest::__set_m_CachePolicy(::System::Net::Cache::RequestCachePolicy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CachePolicy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Cache::RequestCacheProtocol*& System::Net::WebRequest::__get_m_CacheProtocol() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CacheProtocol;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Cache::RequestCacheProtocol*> const& System::Net::WebRequest::__get_m_CacheProtocol() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CacheProtocol;
}
constexpr void System::Net::WebRequest::__set_m_CacheProtocol(::System::Net::Cache::RequestCacheProtocol* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CacheProtocol)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Cache::RequestCacheBinding*& System::Net::WebRequest::__get_m_CacheBinding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CacheBinding;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Cache::RequestCacheBinding*> const& System::Net::WebRequest::__get_m_CacheBinding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CacheBinding;
}
constexpr void System::Net::WebRequest::__set_m_CacheBinding(::System::Net::Cache::RequestCacheBinding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CacheBinding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Net::WebRequest::setStaticF_s_PrefixList(::System::Collections::ArrayList* value) {
  ::cordl_internals::setStaticField<::System::Collections::ArrayList*, "s_PrefixList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get>(
      std::forward<::System::Collections::ArrayList*>(value));
}
inline ::System::Collections::ArrayList* System::Net::WebRequest::getStaticF_s_PrefixList() {
  return ::cordl_internals::getStaticField<::System::Collections::ArrayList*, "s_PrefixList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get>();
}
inline void System::Net::WebRequest::setStaticF_s_InternalSyncObject(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_InternalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Net::WebRequest::getStaticF_s_InternalSyncObject() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_InternalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get>();
}
inline void System::Net::WebRequest::setStaticF_s_DefaultTimerQueue(::System::Net::__TimerThread__Queue* value) {
  ::cordl_internals::setStaticField<::System::Net::__TimerThread__Queue*, "s_DefaultTimerQueue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get>(
      std::forward<::System::Net::__TimerThread__Queue*>(value));
}
inline ::System::Net::__TimerThread__Queue* System::Net::WebRequest::getStaticF_s_DefaultTimerQueue() {
  return ::cordl_internals::getStaticField<::System::Net::__TimerThread__Queue*, "s_DefaultTimerQueue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get>();
}
inline void System::Net::WebRequest::setStaticF_webRequestCreate(::System::Net::__WebRequest__DesignerWebRequestCreate* value) {
  ::cordl_internals::setStaticField<::System::Net::__WebRequest__DesignerWebRequestCreate*, "webRequestCreate",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get>(
      std::forward<::System::Net::__WebRequest__DesignerWebRequestCreate*>(value));
}
inline ::System::Net::__WebRequest__DesignerWebRequestCreate* System::Net::WebRequest::getStaticF_webRequestCreate() {
  return ::cordl_internals::getStaticField<::System::Net::__WebRequest__DesignerWebRequestCreate*, "webRequestCreate",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get>();
}
inline void System::Net::WebRequest::setStaticF_s_DefaultWebProxy(::System::Net::IWebProxy* value) {
  ::cordl_internals::setStaticField<::System::Net::IWebProxy*, "s_DefaultWebProxy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get>(
      std::forward<::System::Net::IWebProxy*>(value));
}
inline ::System::Net::IWebProxy* System::Net::WebRequest::getStaticF_s_DefaultWebProxy() {
  return ::cordl_internals::getStaticField<::System::Net::IWebProxy*, "s_DefaultWebProxy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get>();
}
inline void System::Net::WebRequest::setStaticF_s_DefaultWebProxyInitialized(bool value) {
  ::cordl_internals::setStaticField<bool, "s_DefaultWebProxyInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get>(std::forward<bool>(value));
}
inline bool System::Net::WebRequest::getStaticF_s_DefaultWebProxyInitialized() {
  return ::cordl_internals::getStaticField<bool, "s_DefaultWebProxyInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get>();
}
inline ::System::Object* System::Net::WebRequest::get_InternalSyncObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "get_InternalSyncObject",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method);
}
inline ::System::Net::WebRequest* System::Net::WebRequest::Create(::System::Uri* requestUri, bool useUriBase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "Create", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebRequest*, false>(nullptr, ___internal_method, requestUri, useUriBase);
}
inline ::System::Net::WebRequest* System::Net::WebRequest::Create(::StringW requestUriString) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "Create", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebRequest*, false>(nullptr, ___internal_method, requestUriString);
}
inline ::System::Net::WebRequest* System::Net::WebRequest::Create(::System::Uri* requestUri) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "Create", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebRequest*, false>(nullptr, ___internal_method, requestUri);
}
inline ::System::Collections::ArrayList* System::Net::WebRequest::get_PrefixList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "get_PrefixList",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(nullptr, ___internal_method);
}
inline ::System::Collections::ArrayList* System::Net::WebRequest::PopulatePrefixList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "PopulatePrefixList",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(nullptr, ___internal_method);
}
inline ::System::Net::WebRequest* System::Net::WebRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::WebRequest*>());
}
inline void System::Net::WebRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::WebRequest* System::Net::WebRequest::New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                    ::System::Runtime::Serialization::StreamingContext streamingContext) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::WebRequest*>(serializationInfo, streamingContext));
}
inline void System::Net::WebRequest::_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::WebRequest::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                                              ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::WebRequest::GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "GetObjectData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializationInfo, streamingContext);
}
inline ::System::Net::Cache::RequestCachePolicy* System::Net::WebRequest::get_DefaultCachePolicy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "get_DefaultCachePolicy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::RequestCachePolicy*, false>(nullptr, ___internal_method);
}
inline void System::Net::WebRequest::set_CachePolicy(::System::Net::Cache::RequestCachePolicy* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "set_CachePolicy", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCachePolicy*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::WebRequest::InternalSetCachePolicy(::System::Net::Cache::RequestCachePolicy* policy) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "InternalSetCachePolicy", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCachePolicy*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, policy);
}
inline ::StringW System::Net::WebRequest::get_Method() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "get_Method",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Net::WebRequest::set_Method(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "set_Method", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Uri* System::Net::WebRequest::get_RequestUri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "get_RequestUri",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline void System::Net::WebRequest::set_ConnectionGroupName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "set_ConnectionGroupName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::WebHeaderCollection* System::Net::WebRequest::get_Headers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "get_Headers",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*, false>(this, ___internal_method);
}
inline int64_t System::Net::WebRequest::get_ContentLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "get_ContentLength",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void System::Net::WebRequest::set_ContentLength(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "set_ContentLength", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::ICredentials* System::Net::WebRequest::get_Credentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "get_Credentials",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ICredentials*, false>(this, ___internal_method);
}
inline void System::Net::WebRequest::set_Credentials(::System::Net::ICredentials* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "set_Credentials", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::WebRequest::get_UseDefaultCredentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "get_UseDefaultCredentials",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Net::IWebProxy* System::Net::WebRequest::get_Proxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "get_Proxy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*, false>(this, ___internal_method);
}
inline void System::Net::WebRequest::set_Proxy(::System::Net::IWebProxy* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "set_Proxy", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::WebRequest::set_PreAuthenticate(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "set_PreAuthenticate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Net::WebRequest::get_Timeout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "get_Timeout",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Net::WebRequest::set_Timeout(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "set_Timeout", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::WebResponse* System::Net::WebRequest::GetResponse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "GetResponse",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebResponse*, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* System::Net::WebRequest::BeginGetResponse(::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "BeginGetResponse", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, state);
}
inline ::System::Net::WebResponse* System::Net::WebRequest::EndGetResponse(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "EndGetResponse", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebResponse*, false>(this, ___internal_method, asyncResult);
}
inline ::System::IAsyncResult* System::Net::WebRequest::BeginGetRequestStream(::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "BeginGetRequestStream", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, state);
}
inline ::System::IO::Stream* System::Net::WebRequest::EndGetRequestStream(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "EndGetRequestStream", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, asyncResult);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* System::Net::WebRequest::GetRequestStreamAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "GetRequestStreamAsync",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* System::Net::WebRequest::GetResponseAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "GetResponseAsync",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>*, false>(this, ___internal_method);
}
inline ::System::Security::Principal::WindowsIdentity* System::Net::WebRequest::SafeCaptureIdenity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "SafeCaptureIdenity",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Principal::WindowsIdentity*, false>(this, ___internal_method);
}
inline void System::Net::WebRequest::Abort() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "Abort", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::Cache::RequestCacheProtocol* System::Net::WebRequest::get_CacheProtocol() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "get_CacheProtocol",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::RequestCacheProtocol*, false>(this, ___internal_method);
}
inline void System::Net::WebRequest::set_CacheProtocol(::System::Net::Cache::RequestCacheProtocol* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "set_CacheProtocol", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCacheProtocol*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::IWebProxy* System::Net::WebRequest::get_InternalDefaultWebProxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "get_InternalDefaultWebProxy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* System::Net::WebRequest::_GetRequestStreamAsync_b__78_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(),
                                                                             "<GetRequestStreamAsync>b__78_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* System::Net::WebRequest::_GetResponseAsync_b__79_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequest*>::get(), "<GetResponseAsync>b__79_0",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::WebRequest::WebRequest() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
