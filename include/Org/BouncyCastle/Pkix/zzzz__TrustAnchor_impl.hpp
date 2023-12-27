#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__TrustAnchor_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__NameConstraints_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::TrustAnchor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Org::BouncyCastle::Pkix::TrustAnchor::*)(::Org::BouncyCastle::X509::X509Certificate*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Pkix::TrustAnchor::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x111d3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::TrustAnchor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::TrustAnchor::*)(
    ::Org::BouncyCastle::Asn1::X509::X509Name*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Pkix::TrustAnchor::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x111d51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::TrustAnchor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::TrustAnchor::*)(
    ::StringW, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Pkix::TrustAnchor::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x111d5e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::TrustAnchor.get_TrustedCert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (::Org::BouncyCastle::Pkix::TrustAnchor::*)()>(
    &::Org::BouncyCastle::Pkix::TrustAnchor::get_TrustedCert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x111d730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(),
                                                                               "get_TrustedCert", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::TrustAnchor.get_CA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (::Org::BouncyCastle::Pkix::TrustAnchor::*)()>(
    &::Org::BouncyCastle::Pkix::TrustAnchor::get_CA)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x111d738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(), "get_CA",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::TrustAnchor.get_CAName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Pkix::TrustAnchor::*)()>(&::Org::BouncyCastle::Pkix::TrustAnchor::get_CAName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x111d740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(), "get_CAName",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::TrustAnchor.get_CAPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (::Org::BouncyCastle::Pkix::TrustAnchor::*)()>(
    &::Org::BouncyCastle::Pkix::TrustAnchor::get_CAPublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x111d748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(),
                                                                               "get_CAPublicKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::TrustAnchor.setNameConstraints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::TrustAnchor::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Pkix::TrustAnchor::setNameConstraints)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x111d460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(), "setNameConstraints", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::TrustAnchor.get_GetNameConstraints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Pkix::TrustAnchor::*)()>(
    &::Org::BouncyCastle::Pkix::TrustAnchor::get_GetNameConstraints)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x111d750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(),
                                                                               "get_GetNameConstraints", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::TrustAnchor.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Pkix::TrustAnchor::*)()>(&::Org::BouncyCastle::Pkix::TrustAnchor::ToString)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x111d7ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& Org::BouncyCastle::Pkix::TrustAnchor::__get_pubKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pubKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& Org::BouncyCastle::Pkix::TrustAnchor::__get_pubKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pubKey;
}
constexpr void Org::BouncyCastle::Pkix::TrustAnchor::__set_pubKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pubKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Org::BouncyCastle::Pkix::TrustAnchor::__get_caName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___caName;
}
constexpr ::StringW const& Org::BouncyCastle::Pkix::TrustAnchor::__get_caName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___caName;
}
constexpr void Org::BouncyCastle::Pkix::TrustAnchor::__set_caName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___caName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& Org::BouncyCastle::Pkix::TrustAnchor::__get_caPrincipal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___caPrincipal;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> const& Org::BouncyCastle::Pkix::TrustAnchor::__get_caPrincipal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___caPrincipal;
}
constexpr void Org::BouncyCastle::Pkix::TrustAnchor::__set_caPrincipal(::Org::BouncyCastle::Asn1::X509::X509Name* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___caPrincipal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::X509::X509Certificate*& Org::BouncyCastle::Pkix::TrustAnchor::__get_trustedCert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___trustedCert;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::X509Certificate*> const& Org::BouncyCastle::Pkix::TrustAnchor::__get_trustedCert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___trustedCert;
}
constexpr void Org::BouncyCastle::Pkix::TrustAnchor::__set_trustedCert(::Org::BouncyCastle::X509::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___trustedCert)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Pkix::TrustAnchor::__get_ncBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ncBytes;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Pkix::TrustAnchor::__get_ncBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ncBytes;
}
constexpr void Org::BouncyCastle::Pkix::TrustAnchor::__set_ncBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ncBytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::NameConstraints*& Org::BouncyCastle::Pkix::TrustAnchor::__get_nc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nc;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::NameConstraints*> const& Org::BouncyCastle::Pkix::TrustAnchor::__get_nc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nc;
}
constexpr void Org::BouncyCastle::Pkix::TrustAnchor::__set_nc(::Org::BouncyCastle::Asn1::X509::NameConstraints* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Pkix::TrustAnchor* Org::BouncyCastle::Pkix::TrustAnchor::New_ctor(::Org::BouncyCastle::X509::X509Certificate* trustedCert,
                                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> nameConstraints) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Pkix::TrustAnchor*>(trustedCert, nameConstraints));
}
inline void Org::BouncyCastle::Pkix::TrustAnchor::_ctor(::Org::BouncyCastle::X509::X509Certificate* trustedCert, ::ArrayW<uint8_t, ::Array<uint8_t>*> nameConstraints) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trustedCert, nameConstraints);
}
inline ::Org::BouncyCastle::Pkix::TrustAnchor* Org::BouncyCastle::Pkix::TrustAnchor::New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* caPrincipal,
                                                                                              ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
                                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> nameConstraints) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Pkix::TrustAnchor*>(caPrincipal, pubKey, nameConstraints));
}
inline void Org::BouncyCastle::Pkix::TrustAnchor::_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* caPrincipal, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> nameConstraints) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, caPrincipal, pubKey, nameConstraints);
}
inline ::Org::BouncyCastle::Pkix::TrustAnchor* Org::BouncyCastle::Pkix::TrustAnchor::New_ctor(::StringW caName, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
                                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> nameConstraints) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Pkix::TrustAnchor*>(caName, pubKey, nameConstraints));
}
inline void Org::BouncyCastle::Pkix::TrustAnchor::_ctor(::StringW caName, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> nameConstraints) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, caName, pubKey, nameConstraints);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::Pkix::TrustAnchor::get_TrustedCert() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(), "get_TrustedCert",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Pkix::TrustAnchor::get_CA() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(), "get_CA",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*, false>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Pkix::TrustAnchor::get_CAName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(), "get_CAName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::Pkix::TrustAnchor::get_CAPublicKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(), "get_CAPublicKey",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::TrustAnchor::setNameConstraints(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(), "setNameConstraints", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bytes);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Pkix::TrustAnchor::get_GetNameConstraints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(),
                                                                             "get_GetNameConstraints", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Pkix::TrustAnchor::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::TrustAnchor::TrustAnchor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
