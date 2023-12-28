#pragma once
#include "Mono/Security/X509/zzzz__X509ChainStatusFlags_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__X509Chain_def.hpp"
#include "Mono/Security/X509/zzzz__X509CertificateCollection_def.hpp"
#include "Mono/Security/X509/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X509Chain._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::X509Chain::*)()>(&::Mono::Security::X509::X509Chain::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x23fbe8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Chain*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain.get_TrustAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509CertificateCollection* (::Mono::Security::X509::X509Chain::*)()>(
    &::Mono::Security::X509::X509Chain::get_TrustAnchors)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x23fbef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Chain*>::get(), "get_TrustAnchors",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain.LoadCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::X509Chain::*)(::Mono::Security::X509::X509CertificateCollection*)>(
    &::Mono::Security::X509::X509Chain::LoadCertificates)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23fc040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Chain*>::get(), "LoadCertificates", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509CertificateCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain.Build
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::X509Chain::*)(::Mono::Security::X509::X509Certificate*)>(
    &::Mono::Security::X509::X509Chain::Build)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x23fc058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Chain*>::get(), "Build", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::X509Chain::*)()>(&::Mono::Security::X509::X509Chain::Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23fca20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Chain*>::get(), "Reset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::X509Chain::*)(::Mono::Security::X509::X509Certificate*)>(
    &::Mono::Security::X509::X509Chain::IsValid)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23fc974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Chain*>::get(), "IsValid", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain.FindCertificateParent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Security::X509::X509Certificate* (::Mono::Security::X509::X509Chain::*)(::Mono::Security::X509::X509Certificate*)>(&::Mono::Security::X509::X509Chain::FindCertificateParent)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x23fc400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Chain*>::get(), "FindCertificateParent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain.FindCertificateRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Security::X509::X509Certificate* (::Mono::Security::X509::X509Chain::*)(::Mono::Security::X509::X509Certificate*)>(&::Mono::Security::X509::X509Chain::FindCertificateRoot)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x23fc5f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Chain*>::get(), "FindCertificateRoot", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain.IsTrusted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::X509Chain::*)(::Mono::Security::X509::X509Certificate*)>(
    &::Mono::Security::X509::X509Chain::IsTrusted)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23fca60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Chain*>::get(), "IsTrusted", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain.IsParent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Mono::Security::X509::X509Chain::*)(::Mono::Security::X509::X509Certificate*, ::Mono::Security::X509::X509Certificate*)>(&::Mono::Security::X509::X509Chain::IsParent)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x23fc830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Chain*>::get(), "IsParent", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Mono::Security::X509::X509CertificateCollection*& Mono::Security::X509::X509Chain::__get_roots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roots;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509CertificateCollection*> const& Mono::Security::X509::X509Chain::__get_roots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roots;
}
constexpr void Mono::Security::X509::X509Chain::__set_roots(::Mono::Security::X509::X509CertificateCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roots)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Security::X509::X509CertificateCollection*& Mono::Security::X509::X509Chain::__get_certs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certs;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509CertificateCollection*> const& Mono::Security::X509::X509Chain::__get_certs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certs;
}
constexpr void Mono::Security::X509::X509Chain::__set_certs(::Mono::Security::X509::X509CertificateCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Security::X509::X509Certificate*& Mono::Security::X509::X509Chain::__get__root() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____root;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509Certificate*> const& Mono::Security::X509::X509Chain::__get__root() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____root;
}
constexpr void Mono::Security::X509::X509Chain::__set__root(::Mono::Security::X509::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____root)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Security::X509::X509CertificateCollection*& Mono::Security::X509::X509Chain::__get__chain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chain;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509CertificateCollection*> const& Mono::Security::X509::X509Chain::__get__chain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chain;
}
constexpr void Mono::Security::X509::X509Chain::__set__chain(::Mono::Security::X509::X509CertificateCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____chain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Security::X509::X509ChainStatusFlags& Mono::Security::X509::X509Chain::__get__status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status;
}
constexpr ::Mono::Security::X509::X509ChainStatusFlags const& Mono::Security::X509::X509Chain::__get__status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status;
}
constexpr void Mono::Security::X509::X509Chain::__set__status(::Mono::Security::X509::X509ChainStatusFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____status = value;
}
inline ::Mono::Security::X509::X509Chain* Mono::Security::X509::X509Chain::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::X509::X509Chain*>());
}
inline void Mono::Security::X509::X509Chain::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Chain*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509CertificateCollection* Mono::Security::X509::X509Chain::get_TrustAnchors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Chain*>::get(), "get_TrustAnchors",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509CertificateCollection*, false>(this, ___internal_method);
}
inline void Mono::Security::X509::X509Chain::LoadCertificates(::Mono::Security::X509::X509CertificateCollection* collection) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Chain*>::get(), "LoadCertificates", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509CertificateCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collection);
}
inline bool Mono::Security::X509::X509Chain::Build(::Mono::Security::X509::X509Certificate* leaf) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Chain*>::get(), "Build", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, leaf);
}
inline void Mono::Security::X509::X509Chain::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Chain*>::get(), "Reset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Mono::Security::X509::X509Chain::IsValid(::Mono::Security::X509::X509Certificate* cert) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Chain*>::get(), "IsValid", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cert);
}
inline ::Mono::Security::X509::X509Certificate* Mono::Security::X509::X509Chain::FindCertificateParent(::Mono::Security::X509::X509Certificate* child) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Chain*>::get(), "FindCertificateParent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Certificate*, false>(this, ___internal_method, child);
}
inline ::Mono::Security::X509::X509Certificate* Mono::Security::X509::X509Chain::FindCertificateRoot(::Mono::Security::X509::X509Certificate* potentialRoot) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Chain*>::get(), "FindCertificateRoot", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Certificate*, false>(this, ___internal_method, potentialRoot);
}
inline bool Mono::Security::X509::X509Chain::IsTrusted(::Mono::Security::X509::X509Certificate* potentialTrusted) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Chain*>::get(), "IsTrusted", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, potentialTrusted);
}
inline bool Mono::Security::X509::X509Chain::IsParent(::Mono::Security::X509::X509Certificate* child, ::Mono::Security::X509::X509Certificate* parent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Chain*>::get(), "IsParent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, child, parent);
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X509Chain::X509Chain() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
