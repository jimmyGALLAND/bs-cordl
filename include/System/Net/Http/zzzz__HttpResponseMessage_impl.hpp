#pragma once
#include "System/Net/zzzz__HttpStatusCode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpResponseHeaders_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpResponseMessage::*)(::System::Net::HttpStatusCode)>(
    &::System::Net::Http::HttpResponseMessage::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x282e2b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStatusCode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.get_Content
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::HttpContent* (::System::Net::Http::HttpResponseMessage::*)()>(
    &::System::Net::Http::HttpResponseMessage::get_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2834050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(), "get_Content",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.set_Content
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpResponseMessage::*)(::System::Net::Http::HttpContent*)>(
    &::System::Net::Http::HttpResponseMessage::set_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2834058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(), "set_Content", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpContent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.get_Headers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::Headers::HttpResponseHeaders* (::System::Net::Http::HttpResponseMessage::*)()>(
    &::System::Net::Http::HttpResponseMessage::get_Headers)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x282e420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(), "get_Headers",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.get_IsSuccessStatusCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Http::HttpResponseMessage::*)()>(
    &::System::Net::Http::HttpResponseMessage::get_IsSuccessStatusCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28340c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(),
                                                                               "get_IsSuccessStatusCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.get_ReasonPhrase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::Http::HttpResponseMessage::*)()>(
    &::System::Net::Http::HttpResponseMessage::get_ReasonPhrase)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28340d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(),
                                                                               "get_ReasonPhrase", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.set_ReasonPhrase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpResponseMessage::*)(::StringW)>(
    &::System::Net::Http::HttpResponseMessage::set_ReasonPhrase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28340f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(), "set_ReasonPhrase",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.set_RequestMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpResponseMessage::*)(::System::Net::Http::HttpRequestMessage*)>(
    &::System::Net::Http::HttpResponseMessage::set_RequestMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28340f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(), "set_RequestMessage", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.get_StatusCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpStatusCode (::System::Net::Http::HttpResponseMessage::*)()>(
    &::System::Net::Http::HttpResponseMessage::get_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2834100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(),
                                                                               "get_StatusCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.set_StatusCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpResponseMessage::*)(::System::Net::HttpStatusCode)>(
    &::System::Net::Http::HttpResponseMessage::set_StatusCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2834000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(), "set_StatusCode", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStatusCode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (::System::Net::Http::HttpResponseMessage::*)()>(
    &::System::Net::Http::HttpResponseMessage::get_Version)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2834108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(), "get_Version",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpResponseMessage::*)()>(&::System::Net::Http::HttpResponseMessage::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x283416c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpResponseMessage::*)(bool)>(&::System::Net::Http::HttpResponseMessage::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x283417c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.EnsureSuccessStatusCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::HttpResponseMessage* (::System::Net::Http::HttpResponseMessage::*)()>(
    &::System::Net::Http::HttpResponseMessage::EnsureSuccessStatusCode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x28324c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(),
                                                                               "EnsureSuccessStatusCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::Http::HttpResponseMessage::*)()>(&::System::Net::Http::HttpResponseMessage::ToString)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x28341b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(), 3));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Net::Http::HttpResponseMessage::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Net::Http::Headers::HttpResponseHeaders*& System::Net::Http::HttpResponseMessage::__get_headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___headers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::HttpResponseHeaders*> const& System::Net::Http::HttpResponseMessage::__get_headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___headers;
}
constexpr void System::Net::Http::HttpResponseMessage::__set_headers(::System::Net::Http::Headers::HttpResponseHeaders* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::Http::HttpResponseMessage::__get_reasonPhrase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___reasonPhrase;
}
constexpr ::StringW const& System::Net::Http::HttpResponseMessage::__get_reasonPhrase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___reasonPhrase;
}
constexpr void System::Net::Http::HttpResponseMessage::__set_reasonPhrase(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reasonPhrase)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::HttpStatusCode& System::Net::Http::HttpResponseMessage::__get_statusCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___statusCode;
}
constexpr ::System::Net::HttpStatusCode const& System::Net::Http::HttpResponseMessage::__get_statusCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___statusCode;
}
constexpr void System::Net::Http::HttpResponseMessage::__set_statusCode(::System::Net::HttpStatusCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___statusCode = value;
}
constexpr ::System::Version*& System::Net::Http::HttpResponseMessage::__get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___version;
}
constexpr ::cordl_internals::to_const_pointer<::System::Version*> const& System::Net::Http::HttpResponseMessage::__get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___version;
}
constexpr void System::Net::Http::HttpResponseMessage::__set_version(::System::Version* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::Http::HttpResponseMessage::__get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___disposed;
}
constexpr bool const& System::Net::Http::HttpResponseMessage::__get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___disposed;
}
constexpr void System::Net::Http::HttpResponseMessage::__set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___disposed = value;
}
constexpr ::System::Net::Http::HttpContent*& System::Net::Http::HttpResponseMessage::__get__Content_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Content_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpContent*> const& System::Net::Http::HttpResponseMessage::__get__Content_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Content_k__BackingField;
}
constexpr void System::Net::Http::HttpResponseMessage::__set__Content_k__BackingField(::System::Net::Http::HttpContent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Content_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Http::HttpRequestMessage*& System::Net::Http::HttpResponseMessage::__get__RequestMessage_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____RequestMessage_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpRequestMessage*> const& System::Net::Http::HttpResponseMessage::__get__RequestMessage_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____RequestMessage_k__BackingField;
}
constexpr void System::Net::Http::HttpResponseMessage::__set__RequestMessage_k__BackingField(::System::Net::Http::HttpRequestMessage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____RequestMessage_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::Http::HttpResponseMessage* System::Net::Http::HttpResponseMessage::New_ctor(::System::Net::HttpStatusCode statusCode) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Http::HttpResponseMessage*>(statusCode));
}
inline void System::Net::Http::HttpResponseMessage::_ctor(::System::Net::HttpStatusCode statusCode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStatusCode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, statusCode);
}
inline ::System::Net::Http::HttpContent* System::Net::Http::HttpResponseMessage::get_Content() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(), "get_Content",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpContent*, false>(this, ___internal_method);
}
inline void System::Net::Http::HttpResponseMessage::set_Content(::System::Net::Http::HttpContent* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(), "set_Content", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpContent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::Http::Headers::HttpResponseHeaders* System::Net::Http::HttpResponseMessage::get_Headers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(), "get_Headers",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::HttpResponseHeaders*, false>(this, ___internal_method);
}
inline bool System::Net::Http::HttpResponseMessage::get_IsSuccessStatusCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(),
                                                                             "get_IsSuccessStatusCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Net::Http::HttpResponseMessage::get_ReasonPhrase() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(),
                                                                             "get_ReasonPhrase", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Net::Http::HttpResponseMessage::set_ReasonPhrase(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(), "set_ReasonPhrase",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Http::HttpResponseMessage::set_RequestMessage(::System::Net::Http::HttpRequestMessage* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(), "set_RequestMessage", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::HttpStatusCode System::Net::Http::HttpResponseMessage::get_StatusCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(), "get_StatusCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpStatusCode, false>(this, ___internal_method);
}
inline void System::Net::Http::HttpResponseMessage::set_StatusCode(::System::Net::HttpStatusCode value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(), "set_StatusCode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStatusCode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Version* System::Net::Http::HttpResponseMessage::get_Version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(), "get_Version",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(this, ___internal_method);
}
inline void System::Net::Http::HttpResponseMessage::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Http::HttpResponseMessage::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(), "Dispose", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::System::Net::Http::HttpResponseMessage* System::Net::Http::HttpResponseMessage::EnsureSuccessStatusCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(),
                                                                             "EnsureSuccessStatusCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpResponseMessage*, false>(this, ___internal_method);
}
inline ::StringW System::Net::Http::HttpResponseMessage::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpResponseMessage*>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Http::HttpResponseMessage::HttpResponseMessage() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
