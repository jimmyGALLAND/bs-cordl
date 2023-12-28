#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Mail/zzzz__MailAddress_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Net/Mime/zzzz__EncodedStreamFactory_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Mail::MailAddress._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Mail::MailAddress::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Net::Mail::MailAddress::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x290295c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::MailAddress*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::MailAddress._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Mail::MailAddress::*)(::StringW)>(&::System::Net::Mail::MailAddress::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2903270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::MailAddress*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::MailAddress._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Mail::MailAddress::*)(::StringW, ::StringW, ::System::Text::Encoding*)>(
    &::System::Net::Mail::MailAddress::_ctor)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x290327c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::MailAddress*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::MailAddress.get_DisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::Mail::MailAddress::*)()>(&::System::Net::Mail::MailAddress::get_DisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29034c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::MailAddress*>::get(), "get_DisplayName",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::MailAddress.get_Address
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::Mail::MailAddress::*)()>(&::System::Net::Mail::MailAddress::get_Address)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x29034d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::MailAddress*>::get(), "get_Address",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::MailAddress.get_SmtpAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::Mail::MailAddress::*)()>(&::System::Net::Mail::MailAddress::get_SmtpAddress)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x290351c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::MailAddress*>::get(), "get_SmtpAddress",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::MailAddress.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::Mail::MailAddress::*)()>(&::System::Net::Mail::MailAddress::ToString)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2903594;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::MailAddress*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::MailAddress*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::MailAddress.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Mail::MailAddress::*)(::System::Object*)>(&::System::Net::Mail::MailAddress::Equals)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2903638;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::MailAddress*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::MailAddress*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::MailAddress.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Mail::MailAddress::*)()>(&::System::Net::Mail::MailAddress::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x290369c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::MailAddress*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::MailAddress*>::get(), 2));
    return ___internal_method;
  }
};
constexpr ::System::Text::Encoding*& System::Net::Mail::MailAddress::__get__displayNameEncoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayNameEncoding;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& System::Net::Mail::MailAddress::__get__displayNameEncoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayNameEncoding;
}
constexpr void System::Net::Mail::MailAddress::__set__displayNameEncoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____displayNameEncoding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::Mail::MailAddress::__get__displayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName;
}
constexpr ::StringW const& System::Net::Mail::MailAddress::__get__displayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName;
}
constexpr void System::Net::Mail::MailAddress::__set__displayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____displayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::Mail::MailAddress::__get__userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr ::StringW const& System::Net::Mail::MailAddress::__get__userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr void System::Net::Mail::MailAddress::__set__userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::Mail::MailAddress::__get__host() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____host;
}
constexpr ::StringW const& System::Net::Mail::MailAddress::__get__host() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____host;
}
constexpr void System::Net::Mail::MailAddress::__set__host(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____host)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Net::Mail::MailAddress::setStaticF_s_encoderFactory(::System::Net::Mime::EncodedStreamFactory* value) {
  ::cordl_internals::setStaticField<::System::Net::Mime::EncodedStreamFactory*, "s_encoderFactory", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::MailAddress*>::get>(
      std::forward<::System::Net::Mime::EncodedStreamFactory*>(value));
}
inline ::System::Net::Mime::EncodedStreamFactory* System::Net::Mail::MailAddress::getStaticF_s_encoderFactory() {
  return ::cordl_internals::getStaticField<::System::Net::Mime::EncodedStreamFactory*, "s_encoderFactory",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::MailAddress*>::get>();
}
inline ::System::Net::Mail::MailAddress* System::Net::Mail::MailAddress::New_ctor(::StringW displayName, ::StringW userName, ::StringW domain) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Mail::MailAddress*>(displayName, userName, domain));
}
inline void System::Net::Mail::MailAddress::_ctor(::StringW displayName, ::StringW userName, ::StringW domain) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::MailAddress*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, displayName, userName, domain);
}
inline ::System::Net::Mail::MailAddress* System::Net::Mail::MailAddress::New_ctor(::StringW address) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Mail::MailAddress*>(address));
}
inline void System::Net::Mail::MailAddress::_ctor(::StringW address) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::MailAddress*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, address);
}
inline ::System::Net::Mail::MailAddress* System::Net::Mail::MailAddress::New_ctor(::StringW address, ::StringW displayName, ::System::Text::Encoding* displayNameEncoding) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Mail::MailAddress*>(address, displayName, displayNameEncoding));
}
inline void System::Net::Mail::MailAddress::_ctor(::StringW address, ::StringW displayName, ::System::Text::Encoding* displayNameEncoding) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::MailAddress*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, address, displayName, displayNameEncoding);
}
inline ::StringW System::Net::Mail::MailAddress::get_DisplayName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::MailAddress*>::get(), "get_DisplayName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Net::Mail::MailAddress::get_Address() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::MailAddress*>::get(), "get_Address",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Net::Mail::MailAddress::get_SmtpAddress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::MailAddress*>::get(), "get_SmtpAddress",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Net::Mail::MailAddress::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::MailAddress*>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Net::Mail::MailAddress::Equals(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::MailAddress*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline int32_t System::Net::Mail::MailAddress::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::MailAddress*>::get(), "GetHashCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Mail::MailAddress::MailAddress() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
