#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__V1TbsCertificateGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerTaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__Time_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectPublicKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerUtcTime_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__TbsCertificateStructure_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::*)()>(
    &::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x119a904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator.SetSerialNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::*)(::Org::BouncyCastle::Asn1::DerInteger*)>(
    &::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetSerialNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x119a9a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>::get(), "SetSerialNumber", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator.SetSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::*)(
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(&::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetSignature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x119a9ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>::get(), "SetSignature", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator.SetIssuer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(
    &::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetIssuer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x119a9b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>::get(), "SetIssuer", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator.SetStartDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::*)(::Org::BouncyCastle::Asn1::X509::Time*)>(
    &::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetStartDate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x119a9bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>::get(), "SetStartDate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::Time*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator.SetStartDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::*)(::Org::BouncyCastle::Asn1::DerUtcTime*)>(
    &::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetStartDate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x119a9c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>::get(), "SetStartDate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerUtcTime*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator.SetEndDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::*)(::Org::BouncyCastle::Asn1::X509::Time*)>(
    &::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetEndDate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x119aa30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>::get(), "SetEndDate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::Time*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator.SetEndDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::*)(::Org::BouncyCastle::Asn1::DerUtcTime*)>(
    &::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetEndDate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x119aa38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>::get(), "SetEndDate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerUtcTime*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator.SetSubject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(
    &::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetSubject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x119aaa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>::get(), "SetSubject", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator.SetSubjectPublicKeyInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::*)(
    ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*)>(&::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetSubjectPublicKeyInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x119aaac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>::get(), "SetSubjectPublicKeyInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator.GenerateTbsCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* (
    ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::*)()>(&::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::GenerateTbsCertificate)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x119aab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>::get(), "GenerateTbsCertificate",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerTaggedObject*& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___version;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerTaggedObject*> const& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__set_version(::Org::BouncyCastle::Asn1::DerTaggedObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__get_serialNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___serialNumber;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__get_serialNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___serialNumber;
}
constexpr void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__set_serialNumber(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serialNumber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__get_signature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___signature;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__get_signature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___signature;
}
constexpr void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__set_signature(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___signature)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__get_issuer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___issuer;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> const& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__get_issuer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___issuer;
}
constexpr void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__set_issuer(::Org::BouncyCastle::Asn1::X509::X509Name* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___issuer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::Time*& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__get_startDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___startDate;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::Time*> const& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__get_startDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___startDate;
}
constexpr void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__set_startDate(::Org::BouncyCastle::Asn1::X509::Time* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___startDate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::Time*& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__get_endDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___endDate;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::Time*> const& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__get_endDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___endDate;
}
constexpr void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__set_endDate(::Org::BouncyCastle::Asn1::X509::Time* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___endDate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__get_subject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___subject;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> const& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__get_subject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___subject;
}
constexpr void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__set_subject(::Org::BouncyCastle::Asn1::X509::X509Name* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__get_subjectPublicKeyInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___subjectPublicKeyInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*> const&
Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__get_subjectPublicKeyInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___subjectPublicKeyInfo;
}
constexpr void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__set_subjectPublicKeyInfo(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subjectPublicKeyInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator* Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>());
}
inline void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetSerialNumber(::Org::BouncyCastle::Asn1::DerInteger* serialNumber) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>::get(), "SetSerialNumber", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serialNumber);
}
inline void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetSignature(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>::get(), "SetSignature", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signature);
}
inline void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetIssuer(::Org::BouncyCastle::Asn1::X509::X509Name* issuer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>::get(), "SetIssuer", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, issuer);
}
inline void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetStartDate(::Org::BouncyCastle::Asn1::X509::Time* startDate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>::get(), "SetStartDate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::Time*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startDate);
}
inline void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetStartDate(::Org::BouncyCastle::Asn1::DerUtcTime* startDate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>::get(), "SetStartDate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerUtcTime*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startDate);
}
inline void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetEndDate(::Org::BouncyCastle::Asn1::X509::Time* endDate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>::get(), "SetEndDate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::Time*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endDate);
}
inline void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetEndDate(::Org::BouncyCastle::Asn1::DerUtcTime* endDate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>::get(), "SetEndDate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerUtcTime*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endDate);
}
inline void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetSubject(::Org::BouncyCastle::Asn1::X509::X509Name* subject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>::get(), "SetSubject", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subject);
}
inline void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetSubjectPublicKeyInfo(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* pubKeyInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>::get(), "SetSubjectPublicKeyInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pubKeyInfo);
}
inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::GenerateTbsCertificate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>::get(),
                                                                             "GenerateTbsCertificate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::V1TbsCertificateGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
