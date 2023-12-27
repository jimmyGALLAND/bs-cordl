#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedHelper_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformationStore_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__RecipientInfo_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBufferedCipher_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSecureReadable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IWrapper_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedHelper_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsReadable_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable::*)(
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Cms::CmsReadable*)>(&::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x11e3fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsReadable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable.get_Algorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (
    ::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable::*)()>(&::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable::get_Algorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11e400c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable*>::get(),
                                                 "get_Algorithm", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable.get_CryptoObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable::*)()>(
    &::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable::get_CryptoObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11e4014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable*>::get(),
                                                 "get_CryptoObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable.GetReadable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Cms::CmsReadable* (::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable::*)(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)>(
        &::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable::GetReadable)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x11e401c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable*>::get(), "GetReadable", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsSecureReadable"
constexpr Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable::operator ::Org::BouncyCastle::Cms::CmsSecureReadable*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsSecureReadable*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable::__get_algorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___algorithm;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const&
Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable::__get_algorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___algorithm;
}
constexpr void Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable::__set_algorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___algorithm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::IMac*& Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable::__get_mac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mac;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const& Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable::__get_mac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mac;
}
constexpr void Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable::__set_mac(::Org::BouncyCastle::Crypto::IMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mac)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Cms::CmsReadable*& Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable::__get_readable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___readable;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsReadable*> const& Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable::__get_readable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___readable;
}
constexpr void Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable::__set_readable(::Org::BouncyCastle::Cms::CmsReadable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___readable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable*
Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable::New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm,
                                                                                       ::Org::BouncyCastle::Cms::CmsReadable* readable) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable*>(algorithm, readable));
}
inline void Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable::_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm,
                                                                                                ::Org::BouncyCastle::Cms::CmsReadable* readable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsReadable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, algorithm, readable);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable::get_Algorithm() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable*>::get(),
                                               "get_Algorithm", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method);
}
inline ::System::Object* Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable::get_CryptoObject() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable*>::get(),
                                               "get_CryptoObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsReadable* Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable::GetReadable(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* sKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable*>::get(), "GetReadable", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsReadable*, false>(this, ___internal_method, sKey);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable() {}
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable::*)(
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Cms::CmsReadable*)>(&::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x11e4478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsReadable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable.get_Algorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (
    ::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable::*)()>(&::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable::get_Algorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11e44a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable*>::get(),
                                                 "get_Algorithm", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable.get_CryptoObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable::*)()>(
    &::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable::get_CryptoObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11e44b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable*>::get(),
                                                 "get_CryptoObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable.GetReadable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Cms::CmsReadable* (::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable::*)(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)>(
        &::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable::GetReadable)> {
  constexpr static std::size_t size = 0x63c;
  constexpr static std::size_t addrs = 0x11e44b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable*>::get(), "GetReadable", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsSecureReadable"
constexpr Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable::operator ::Org::BouncyCastle::Cms::CmsSecureReadable*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsSecureReadable*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable::__get_algorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___algorithm;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const&
Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable::__get_algorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___algorithm;
}
constexpr void Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable::__set_algorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___algorithm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher*& Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable::__get_cipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___cipher;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBufferedCipher*> const& Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable::__get_cipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___cipher;
}
constexpr void Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable::__set_cipher(::Org::BouncyCastle::Crypto::IBufferedCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cipher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Cms::CmsReadable*& Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable::__get_readable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___readable;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsReadable*> const& Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable::__get_readable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___readable;
}
constexpr void Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable::__set_readable(::Org::BouncyCastle::Cms::CmsReadable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___readable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable*
Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable::New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm, ::Org::BouncyCastle::Cms::CmsReadable* readable) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable*>(algorithm, readable));
}
inline void Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable::_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm,
                                                                                            ::Org::BouncyCastle::Cms::CmsReadable* readable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsReadable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, algorithm, readable);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable::get_Algorithm() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable*>::get(),
                                               "get_Algorithm", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method);
}
inline ::System::Object* Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable::get_CryptoObject() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable*>::get(),
                                               "get_CryptoObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsReadable* Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable::GetReadable(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* sKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable*>::get(), "GetReadable", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsReadable*, false>(this, ___internal_method, sKey);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable() {}
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedHelper.GetAsymmetricEncryptionAlgName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Cms::CmsEnvelopedHelper::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedHelper::GetAsymmetricEncryptionAlgName)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x11e2614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>::get(), "GetAsymmetricEncryptionAlgName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedHelper.CreateAsymmetricCipher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IBufferedCipher* (::Org::BouncyCastle::Cms::CmsEnvelopedHelper::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedHelper::CreateAsymmetricCipher)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x11e26ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>::get(), "CreateAsymmetricCipher",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedHelper.CreateWrapper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IWrapper* (::Org::BouncyCastle::Cms::CmsEnvelopedHelper::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedHelper::CreateWrapper)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x11e27c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>::get(), "CreateWrapper",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedHelper.GetRfc3211WrapperName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Cms::CmsEnvelopedHelper::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedHelper::GetRfc3211WrapperName)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x11e28c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>::get(), "GetRfc3211WrapperName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedHelper.GetKeySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Cms::CmsEnvelopedHelper::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedHelper::GetKeySize)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x11e2aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>::get(), "GetKeySize",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedHelper.BuildRecipientInformationStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Cms::RecipientInformationStore* (*)(::Org::BouncyCastle::Asn1::Asn1Set*, ::Org::BouncyCastle::Cms::CmsSecureReadable*)>(
        &::Org::BouncyCastle::Cms::CmsEnvelopedHelper::BuildRecipientInformationStore)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x11e2ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>::get(), "BuildRecipientInformationStore", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsSecureReadable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedHelper.ReadRecipientInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Collections::IList*, ::Org::BouncyCastle::Asn1::Cms::RecipientInfo*, ::Org::BouncyCastle::Cms::CmsSecureReadable*)>(&::Org::BouncyCastle::Cms::CmsEnvelopedHelper::ReadRecipientInfo)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x11e2ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>::get(), "ReadRecipientInfo", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsSecureReadable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedHelper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedHelper::*)()>(&::Org::BouncyCastle::Cms::CmsEnvelopedHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11e260c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Cms::CmsEnvelopedHelper::setStaticF_Instance(::Org::BouncyCastle::Cms::CmsEnvelopedHelper* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>::get>(
      std::forward<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(value));
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedHelper* Org::BouncyCastle::Cms::CmsEnvelopedHelper::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedHelper::setStaticF_KeySizes(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "KeySizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::CmsEnvelopedHelper::getStaticF_KeySizes() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "KeySizes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedHelper::setStaticF_BaseCipherNames(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "BaseCipherNames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::CmsEnvelopedHelper::getStaticF_BaseCipherNames() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "BaseCipherNames",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>::get>();
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedHelper::GetAsymmetricEncryptionAlgName(::StringW encryptionAlgOid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>::get(), "GetAsymmetricEncryptionAlgName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, encryptionAlgOid);
}
inline ::Org::BouncyCastle::Crypto::IBufferedCipher* Org::BouncyCastle::Cms::CmsEnvelopedHelper::CreateAsymmetricCipher(::StringW encryptionOid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>::get(), "CreateAsymmetricCipher",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBufferedCipher*, false>(this, ___internal_method, encryptionOid);
}
inline ::Org::BouncyCastle::Crypto::IWrapper* Org::BouncyCastle::Cms::CmsEnvelopedHelper::CreateWrapper(::StringW encryptionOid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>::get(), "CreateWrapper",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IWrapper*, false>(this, ___internal_method, encryptionOid);
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedHelper::GetRfc3211WrapperName(::StringW oid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>::get(), "GetRfc3211WrapperName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, oid);
}
inline int32_t Org::BouncyCastle::Cms::CmsEnvelopedHelper::GetKeySize(::StringW oid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>::get(), "GetKeySize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Cms::RecipientInformationStore* Org::BouncyCastle::Cms::CmsEnvelopedHelper::BuildRecipientInformationStore(::Org::BouncyCastle::Asn1::Asn1Set* recipientInfos,
                                                                                                                                       ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>::get(), "BuildRecipientInformationStore", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsSecureReadable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::RecipientInformationStore*, false>(nullptr, ___internal_method, recipientInfos, secureReadable);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedHelper::ReadRecipientInfo(::System::Collections::IList* infos, ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* info,
                                                                          ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>::get(), "ReadRecipientInfo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsSecureReadable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, infos, info, secureReadable);
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedHelper* Org::BouncyCastle::Cms::CmsEnvelopedHelper::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>());
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsEnvelopedHelper::CmsEnvelopedHelper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
