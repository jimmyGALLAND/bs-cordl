#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__EncryptedContentInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Asn1::Asn1OctetString*)>(
    &::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xe76334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1OctetString*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xe76370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::GetInstance)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xe7426c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>::get(), "GetInstance",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo.get_ContentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::get_ContentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe764e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>::get(),
                                                                               "get_ContentType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo.get_ContentEncryptionAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::get_ContentEncryptionAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe764e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>::get(),
                                                                               "get_ContentEncryptionAlgorithm", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo.get_EncryptedContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::get_EncryptedContent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe764f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>::get(),
                                                                               "get_EncryptedContent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::ToAsn1Object)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xe764f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::__get_contentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___contentType;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::__get_contentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___contentType;
}
constexpr void Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::__set_contentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___contentType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::__get_contentEncryptionAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___contentEncryptionAlgorithm;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const&
Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::__get_contentEncryptionAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___contentEncryptionAlgorithm;
}
constexpr void Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::__set_contentEncryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___contentEncryptionAlgorithm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::__get_encryptedContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___encryptedContent;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::__get_encryptedContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___encryptedContent;
}
constexpr void Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::__set_encryptedContent(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___encryptedContent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*
Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType,
                                                             ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* contentEncryptionAlgorithm,
                                                             ::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedContent) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>(contentType, contentEncryptionAlgorithm, encryptedContent));
}
inline void Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType,
                                                                      ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* contentEncryptionAlgorithm,
                                                                      ::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedContent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1OctetString*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, contentType, contentEncryptionAlgorithm, encryptedContent);
}
inline ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>(seq));
}
inline void Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>::get(), "GetInstance",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*, false>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::get_ContentType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>::get(),
                                                                             "get_ContentType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::get_ContentEncryptionAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>::get(),
                                                                             "get_ContentEncryptionAlgorithm", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::get_EncryptedContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>::get(),
                                                                             "get_EncryptedContent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::ToAsn1Object() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>::get(),
                                                                             "ToAsn1Object", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo::EncryptedContentInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
