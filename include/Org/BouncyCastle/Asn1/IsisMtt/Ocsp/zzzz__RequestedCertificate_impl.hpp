#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/IsisMtt/Ocsp/zzzz__RequestedCertificate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509CertificateStructure_def.hpp"
#include "Org/BouncyCastle/Asn1/IsisMtt/Ocsp/zzzz__RequestedCertificate_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice::__RequestedCertificate__Choice(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice::__RequestedCertificate__Choice() {}
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice::Certificate{ static_cast<int32_t>(
    0xffffffff) };
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice::PublicKeyCertificate{ static_cast<int32_t>(
    0x0) };
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice::AttributeCertificate{ static_cast<int32_t>(
    0x1) };
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::GetInstance)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xf7612c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>::get(), "GetInstance",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
        &::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::GetInstance)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xf76474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>::get(), "GetInstance", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::*)(
    ::Org::BouncyCastle::Asn1::Asn1TaggedObject*)>(&::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xf76348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::*)(
    ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*)>(&::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xf76320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::*)(
    ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xf764e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice (
    ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::*)()>(&::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::get_Type)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xf7658c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>::get(), "get_Type",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate.GetCertificateBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::GetCertificateBytes)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xf765ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>::get(), "GetCertificateBytes",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::ToAsn1Object)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xf766b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>::get(), 5));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*& Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::__get_cert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cert;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> const& Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::__get_cert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cert;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::__set_cert(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cert)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::__get_publicKeyCert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKeyCert;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::__get_publicKeyCert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKeyCert;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::__set_publicKeyCert(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___publicKeyCert)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::__get_attributeCert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCert;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::__get_attributeCert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCert;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::__set_attributeCert(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributeCert)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate* Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>::get(), "GetInstance",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*, false>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate* Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj,
                                                                                                                                                 bool isExplicit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>::get(), "GetInstance", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*, false>(nullptr, ___internal_method, obj, isExplicit);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate* Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(tagged));
}
inline void Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tagged);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*
Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::New_ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* certificate) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(certificate));
}
inline void Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::_ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* certificate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificate);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*
Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::New_ctor(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice type,
                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> certificateOctets) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(type, certificateOctets));
}
inline void Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::_ctor(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice type,
                                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> certificateOctets) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, certificateOctets);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>::get(), "get_Type",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::__RequestedCertificate__Choice, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::GetCertificateBytes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>::get(), "GetCertificateBytes",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::ToAsn1Object() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>::get(), "ToAsn1Object",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::RequestedCertificate() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
