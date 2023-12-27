#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__V2AttributeCertificateInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttCertIssuer_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__Holder_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttributeCertificateInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1EncodableVector_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttributeX509_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::*)()>(
    &::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x119ad88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator.SetHolder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::*)(
    ::Org::BouncyCastle::Asn1::X509::Holder*)>(&::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetHolder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x119ae28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>::get(), "SetHolder", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::Holder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator.AddAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::*)(
    ::StringW, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::AddAttribute)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x119ae30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>::get(), "AddAttribute", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator.AddAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::*)(
    ::Org::BouncyCastle::Asn1::X509::AttributeX509*)>(&::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::AddAttribute)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x119af18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>::get(), "AddAttribute", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AttributeX509*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator.SetSerialNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::*)(
    ::Org::BouncyCastle::Asn1::DerInteger*)>(&::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetSerialNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x119af34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>::get(), "SetSerialNumber", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator.SetSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::*)(
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(&::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetSignature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x119af3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>::get(), "SetSignature", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator.SetIssuer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::*)(
    ::Org::BouncyCastle::Asn1::X509::AttCertIssuer*)>(&::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetIssuer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x119af44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>::get(), "SetIssuer", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator.SetStartDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::*)(
    ::Org::BouncyCastle::Asn1::DerGeneralizedTime*)>(&::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetStartDate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x119af4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>::get(), "SetStartDate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator.SetEndDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::*)(
    ::Org::BouncyCastle::Asn1::DerGeneralizedTime*)>(&::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetEndDate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x119af54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>::get(), "SetEndDate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator.SetIssuerUniqueID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::*)(
    ::Org::BouncyCastle::Asn1::DerBitString*)>(&::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetIssuerUniqueID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x119af5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>::get(), "SetIssuerUniqueID", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerBitString*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator.SetExtensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::*)(
    ::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(&::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetExtensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x119af64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>::get(), "SetExtensions", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator.GenerateAttributeCertificateInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* (
    ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::*)()>(&::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::GenerateAttributeCertificateInfo)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x119af6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>::get(),
                                                 "GenerateAttributeCertificateInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___version;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::Holder*& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__get_holder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___holder;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::Holder*> const& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__get_holder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___holder;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__set_holder(::Org::BouncyCastle::Asn1::X509::Holder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___holder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AttCertIssuer*& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__get_issuer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___issuer;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*> const& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__get_issuer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___issuer;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__set_issuer(::Org::BouncyCastle::Asn1::X509::AttCertIssuer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___issuer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__get_signature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___signature;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const&
Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__get_signature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___signature;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__set_signature(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___signature)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__get_serialNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___serialNumber;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__get_serialNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___serialNumber;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__set_serialNumber(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serialNumber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector*& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__get_attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___attributes;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1EncodableVector*> const& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__get_attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___attributes;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__set_attributes(::Org::BouncyCastle::Asn1::Asn1EncodableVector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString*& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__get_issuerUniqueID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___issuerUniqueID;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__get_issuerUniqueID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___issuerUniqueID;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__set_issuerUniqueID(::Org::BouncyCastle::Asn1::DerBitString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___issuerUniqueID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__get_extensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___extensions;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> const& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__get_extensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___extensions;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___extensions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__get_startDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___startDate;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> const& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__get_startDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___startDate;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__set_startDate(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___startDate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__get_endDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___endDate;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> const& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__get_endDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___endDate;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__set_endDate(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___endDate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator* Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>());
}
inline void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetHolder(::Org::BouncyCastle::Asn1::X509::Holder* holder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>::get(), "SetHolder", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::Holder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, holder);
}
inline void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::AddAttribute(::StringW oid, ::Org::BouncyCastle::Asn1::Asn1Encodable* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>::get(), "AddAttribute", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oid, value);
}
inline void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::AddAttribute(::Org::BouncyCastle::Asn1::X509::AttributeX509* attribute) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>::get(), "AddAttribute", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AttributeX509*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attribute);
}
inline void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetSerialNumber(::Org::BouncyCastle::Asn1::DerInteger* serialNumber) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>::get(), "SetSerialNumber", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serialNumber);
}
inline void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetSignature(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>::get(), "SetSignature", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signature);
}
inline void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetIssuer(::Org::BouncyCastle::Asn1::X509::AttCertIssuer* issuer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>::get(), "SetIssuer", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, issuer);
}
inline void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetStartDate(::Org::BouncyCastle::Asn1::DerGeneralizedTime* startDate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>::get(), "SetStartDate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startDate);
}
inline void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetEndDate(::Org::BouncyCastle::Asn1::DerGeneralizedTime* endDate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>::get(), "SetEndDate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endDate);
}
inline void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetIssuerUniqueID(::Org::BouncyCastle::Asn1::DerBitString* issuerUniqueID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>::get(), "SetIssuerUniqueID", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerBitString*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, issuerUniqueID);
}
inline void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>::get(), "SetExtensions", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, extensions);
}
inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::GenerateAttributeCertificateInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>::get(),
                                               "GenerateAttributeCertificateInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::V2AttributeCertificateInfoGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
