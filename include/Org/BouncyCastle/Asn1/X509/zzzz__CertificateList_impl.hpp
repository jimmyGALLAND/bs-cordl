#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__CertificateList_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__Time_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__CrlEntry_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__TbsCertificateList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::CertificateList* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::GetInstance)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1086cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(), "GetInstance", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::CertificateList* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::GetInstance)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1086cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(), "GetInstance",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::CertificateList::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1086d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.get_TbsCertList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::TbsCertificateList* (::Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::get_TbsCertList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1086ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(),
                                                                               "get_TbsCertList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.GetRevokedCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X509::CrlEntry*, ::Array<::Org::BouncyCastle::Asn1::X509::CrlEntry*>*> (
    ::Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(&::Org::BouncyCastle::Asn1::X509::CertificateList::GetRevokedCertificates)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1086eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(),
                                                                               "GetRevokedCertificates", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.GetRevokedCertificateEnumeration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::GetRevokedCertificateEnumeration)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1086f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(),
                                                                               "GetRevokedCertificateEnumeration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.get_SignatureAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::get_SignatureAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1086f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(),
                                                                               "get_SignatureAlgorithm", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.get_Signature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerBitString* (::Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::get_Signature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1086f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(),
                                                                               "get_Signature", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.GetSignatureOctets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::GetSignatureOctets)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1086f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(),
                                                                               "GetSignatureOctets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::get_Version)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1086f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(),
                                                                               "get_Version", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.get_Issuer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (::Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::get_Issuer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1086f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(),
                                                                               "get_Issuer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.get_ThisUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::Time* (::Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::get_ThisUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1086f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(),
                                                                               "get_ThisUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.get_NextUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::Time* (::Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::get_NextUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1086fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(),
                                                                               "get_NextUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::ToAsn1Object)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x1086fc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::TbsCertificateList*& Org::BouncyCastle::Asn1::X509::CertificateList::__get_tbsCertList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___tbsCertList;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*> const& Org::BouncyCastle::Asn1::X509::CertificateList::__get_tbsCertList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___tbsCertList;
}
constexpr void Org::BouncyCastle::Asn1::X509::CertificateList::__set_tbsCertList(::Org::BouncyCastle::Asn1::X509::TbsCertificateList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tbsCertList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::X509::CertificateList::__get_sigAlgID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___sigAlgID;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& Org::BouncyCastle::Asn1::X509::CertificateList::__get_sigAlgID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___sigAlgID;
}
constexpr void Org::BouncyCastle::Asn1::X509::CertificateList::__set_sigAlgID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sigAlgID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString*& Org::BouncyCastle::Asn1::X509::CertificateList::__get_sig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___sig;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& Org::BouncyCastle::Asn1::X509::CertificateList::__get_sig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___sig;
}
constexpr void Org::BouncyCastle::Asn1::X509::CertificateList::__set_sig(::Org::BouncyCastle::Asn1::DerBitString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::X509::CertificateList* Org::BouncyCastle::Asn1::X509::CertificateList::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(), "GetInstance", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::CertificateList*, false>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::X509::CertificateList* Org::BouncyCastle::Asn1::X509::CertificateList::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(), "GetInstance",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::CertificateList*, false>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::X509::CertificateList* Org::BouncyCastle::Asn1::X509::CertificateList::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::X509::CertificateList*>(seq));
}
inline void Org::BouncyCastle::Asn1::X509::CertificateList::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* Org::BouncyCastle::Asn1::X509::CertificateList::get_TbsCertList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(),
                                                                             "get_TbsCertList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*, false>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::CrlEntry*, ::Array<::Org::BouncyCastle::Asn1::X509::CrlEntry*>*> Org::BouncyCastle::Asn1::X509::CertificateList::GetRevokedCertificates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(),
                                                                             "GetRevokedCertificates", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X509::CrlEntry*, ::Array<::Org::BouncyCastle::Asn1::X509::CrlEntry*>*>, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Asn1::X509::CertificateList::GetRevokedCertificateEnumeration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(),
                                                                             "GetRevokedCertificateEnumeration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::X509::CertificateList::get_SignatureAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(),
                                                                             "get_SignatureAlgorithm", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::Asn1::X509::CertificateList::get_Signature() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(),
                                                                             "get_Signature", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBitString*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Asn1::X509::CertificateList::GetSignatureOctets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(),
                                                                             "GetSignatureOctets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Asn1::X509::CertificateList::get_Version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(),
                                                                             "get_Version", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Asn1::X509::CertificateList::get_Issuer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(),
                                                                             "get_Issuer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::Time* Org::BouncyCastle::Asn1::X509::CertificateList::get_ThisUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(),
                                                                             "get_ThisUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::Time*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::Time* Org::BouncyCastle::Asn1::X509::CertificateList::get_NextUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(),
                                                                             "get_NextUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::Time*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::CertificateList::ToAsn1Object() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get(),
                                                                             "ToAsn1Object", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::CertificateList::CertificateList() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
