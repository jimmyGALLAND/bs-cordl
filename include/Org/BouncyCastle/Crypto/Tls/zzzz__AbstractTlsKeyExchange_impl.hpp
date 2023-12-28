#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsKeyExchange_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DigitallySigned_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)(int32_t, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xf5b564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.ParseSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::DigitallySigned* (
    ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ParseSignature)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xf5b594;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::Init)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xf5b708;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.SkipServerCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::SkipServerCredentials)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.ProcessServerCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::Certificate*)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ProcessServerCertificate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf5b920;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.ProcessServerCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*)>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ProcessServerCredentials)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xf5b924;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.get_RequiresServerKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::get_RequiresServerKeyExchange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf5b9dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.GenerateServerKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::GenerateServerKeyExchange)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xf5b9e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.SkipServerKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::SkipServerKeyExchange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xf5ba48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.ProcessServerKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ProcessServerKeyExchange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xf5baa8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.ValidateCertificateRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)(
    ::Org::BouncyCastle::Crypto::Tls::CertificateRequest*)>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ValidateCertificateRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.SkipClientCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::SkipClientCredentials)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf5bb08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.ProcessClientCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*)>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ProcessClientCredentials)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.ProcessClientCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::Certificate*)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ProcessClientCertificate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf5bb0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.GenerateClientKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::GenerateClientKeyExchange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.ProcessClientKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ProcessClientKeyExchange)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xf5bb10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.GeneratePremasterSecret
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::GeneratePremasterSecret)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), 34));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange"
constexpr Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::operator ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>(static_cast<void*>(this));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::__get_mKeyExchange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mKeyExchange;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::__get_mKeyExchange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mKeyExchange;
}
constexpr void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::__set_mKeyExchange(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mKeyExchange = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::__get_mSupportedSignatureAlgorithms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSupportedSignatureAlgorithms;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::__get_mSupportedSignatureAlgorithms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSupportedSignatureAlgorithms;
}
constexpr void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::__set_mSupportedSignatureAlgorithms(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mSupportedSignatureAlgorithms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::__get_mContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mContext;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsContext*> const& Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::__get_mContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mContext;
}
constexpr void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::__set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange* Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::New_ctor(int32_t keyExchange,
                                                                                                                                  ::System::Collections::IList* supportedSignatureAlgorithms) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(keyExchange, supportedSignatureAlgorithms));
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyExchange, supportedSignatureAlgorithms);
}
inline ::Org::BouncyCastle::Crypto::Tls::DigitallySigned* Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ParseSignature(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), "ParseSignature",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*, false>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::Init(::Org::BouncyCastle::Crypto::Tls::TlsContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), "Init", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::SkipServerCredentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(),
                                                                             "SkipServerCredentials", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), "ProcessServerCertificate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serverCertificate);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ProcessServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* serverCredentials) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), "ProcessServerCredentials", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serverCredentials);
}
inline bool Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::get_RequiresServerKeyExchange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(),
                                                                             "get_RequiresServerKeyExchange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::GenerateServerKeyExchange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(),
                                                                             "GenerateServerKeyExchange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::SkipServerKeyExchange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(),
                                                                             "SkipServerKeyExchange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ProcessServerKeyExchange(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), "ProcessServerKeyExchange",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), "ValidateCertificateRequest", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificateRequest);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::SkipClientCredentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(),
                                                                             "SkipClientCredentials", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* clientCredentials) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), "ProcessClientCredentials", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clientCredentials);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ProcessClientCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), "ProcessClientCertificate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clientCertificate);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::GenerateClientKeyExchange(::System::IO::Stream* output) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), "GenerateClientKeyExchange",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ProcessClientKeyExchange(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(), "ProcessClientKeyExchange",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::GeneratePremasterSecret() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>::get(),
                                                                             "GeneratePremasterSecret", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::AbstractTlsKeyExchange() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
