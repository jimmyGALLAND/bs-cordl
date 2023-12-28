#pragma once
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/Net/Security/zzzz__AuthenticatedStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::System::Net::Security::AuthenticatedStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Security::AuthenticatedStream::*)(::System::IO::Stream*, bool)>(
    &::System::Net::Security::AuthenticatedStream::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x28ff760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::AuthenticatedStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::AuthenticatedStream.get_InnerStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Net::Security::AuthenticatedStream::*)()>(
    &::System::Net::Security::AuthenticatedStream::get_InnerStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28ff8f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::AuthenticatedStream*>::get(),
                                                                               "get_InnerStream", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::AuthenticatedStream.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Security::AuthenticatedStream::*)(bool)>(
    &::System::Net::Security::AuthenticatedStream::Dispose)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x28ff900;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::AuthenticatedStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::AuthenticatedStream*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::AuthenticatedStream.get_IsAuthenticated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Security::AuthenticatedStream::*)()>(
    &::System::Net::Security::AuthenticatedStream::get_IsAuthenticated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::AuthenticatedStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::AuthenticatedStream*>::get(), 42));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::Net::Security::AuthenticatedStream::__get__InnerStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InnerStream;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& System::Net::Security::AuthenticatedStream::__get__InnerStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InnerStream;
}
constexpr void System::Net::Security::AuthenticatedStream::__set__InnerStream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____InnerStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::Security::AuthenticatedStream::__get__LeaveStreamOpen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LeaveStreamOpen;
}
constexpr bool const& System::Net::Security::AuthenticatedStream::__get__LeaveStreamOpen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LeaveStreamOpen;
}
constexpr void System::Net::Security::AuthenticatedStream::__set__LeaveStreamOpen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LeaveStreamOpen = value;
}
inline ::System::Net::Security::AuthenticatedStream* System::Net::Security::AuthenticatedStream::New_ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Security::AuthenticatedStream*>(innerStream, leaveInnerStreamOpen));
}
inline void System::Net::Security::AuthenticatedStream::_ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::AuthenticatedStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, innerStream, leaveInnerStreamOpen);
}
inline ::System::IO::Stream* System::Net::Security::AuthenticatedStream::get_InnerStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::AuthenticatedStream*>::get(),
                                                                             "get_InnerStream", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline void System::Net::Security::AuthenticatedStream::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::AuthenticatedStream*>::get(), "Dispose", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline bool System::Net::Security::AuthenticatedStream::get_IsAuthenticated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::AuthenticatedStream*>::get(),
                                                                             "get_IsAuthenticated", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Security::AuthenticatedStream::AuthenticatedStream() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
