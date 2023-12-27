#pragma once
#include "Mono/Security/X509/zzzz__X509Extension_impl.hpp"
#include "Mono/Security/X509/Extensions/zzzz__BasicConstraintsExtension_def.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::Extensions::BasicConstraintsExtension._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::Extensions::BasicConstraintsExtension::*)(::Mono::Security::X509::X509Extension*)>(
    &::Mono::Security::X509::Extensions::BasicConstraintsExtension::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23fcb3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Extension*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::BasicConstraintsExtension.Decode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::Extensions::BasicConstraintsExtension::*)()>(
    &::Mono::Security::X509::Extensions::BasicConstraintsExtension::Decode)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x23fe72c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::BasicConstraintsExtension.Encode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::Extensions::BasicConstraintsExtension::*)()>(
    &::Mono::Security::X509::Extensions::BasicConstraintsExtension::Encode)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x23fe864;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::BasicConstraintsExtension.get_CertificateAuthority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::Extensions::BasicConstraintsExtension::*)()>(
    &::Mono::Security::X509::Extensions::BasicConstraintsExtension::get_CertificateAuthority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23fe998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(),
                                                 "get_CertificateAuthority", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::BasicConstraintsExtension.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::X509::Extensions::BasicConstraintsExtension::*)()>(
    &::Mono::Security::X509::Extensions::BasicConstraintsExtension::ToString)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x23fe9a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(), 3));
    return ___internal_method;
  }
};
constexpr bool& Mono::Security::X509::Extensions::BasicConstraintsExtension::__get_cA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___cA;
}
constexpr bool const& Mono::Security::X509::Extensions::BasicConstraintsExtension::__get_cA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___cA;
}
constexpr void Mono::Security::X509::Extensions::BasicConstraintsExtension::__set_cA(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___cA = value;
}
constexpr int32_t& Mono::Security::X509::Extensions::BasicConstraintsExtension::__get_pathLenConstraint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pathLenConstraint;
}
constexpr int32_t const& Mono::Security::X509::Extensions::BasicConstraintsExtension::__get_pathLenConstraint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pathLenConstraint;
}
constexpr void Mono::Security::X509::Extensions::BasicConstraintsExtension::__set_pathLenConstraint(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___pathLenConstraint = value;
}
inline ::Mono::Security::X509::Extensions::BasicConstraintsExtension* Mono::Security::X509::Extensions::BasicConstraintsExtension::New_ctor(::Mono::Security::X509::X509Extension* extension) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>(extension));
}
inline void Mono::Security::X509::Extensions::BasicConstraintsExtension::_ctor(::Mono::Security::X509::X509Extension* extension) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Extension*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, extension);
}
inline void Mono::Security::X509::Extensions::BasicConstraintsExtension::Decode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(), "Decode",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Security::X509::Extensions::BasicConstraintsExtension::Encode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(), "Encode",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Mono::Security::X509::Extensions::BasicConstraintsExtension::get_CertificateAuthority() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(),
                                               "get_CertificateAuthority", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Mono::Security::X509::Extensions::BasicConstraintsExtension::ToString() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(), "ToString",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::Extensions::BasicConstraintsExtension::BasicConstraintsExtension() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
