#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__ProtectedPkiMessage_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__PKMacBuilder_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCalculator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiBody_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiMessage_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiHeader_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__GeneralPkiMessage_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)(::Org::BouncyCastle::Cmp::GeneralPkiMessage*)>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessage::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x11d610c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cmp::GeneralPkiMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)(::Org::BouncyCastle::Asn1::Cmp::PkiMessage*)>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessage::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x11d61a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage.get_Header
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiHeader* (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)()>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessage::get_Header)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x11d6244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>::get(),
                                                                               "get_Header", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage.get_Body
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiBody* (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)()>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessage::get_Body)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x11d6264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>::get(),
                                                                               "get_Body", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage.ToAsn1Message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiMessage* (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)()>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessage::ToAsn1Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11d6284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>::get(),
                                                                               "ToAsn1Message", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage.get_HasPasswordBasedMacProtected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)()>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessage::get_HasPasswordBasedMacProtected)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x11d628c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>::get(),
                                                                               "get_HasPasswordBasedMacProtected", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage.GetCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*> (
    ::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)()>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessage::GetCertificates)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x11d6334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>::get(),
                                                                               "GetCertificates", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage.Verify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)(::Org::BouncyCastle::Crypto::IVerifierFactory*)>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessage::Verify)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x11d649c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>::get(), "Verify", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IVerifierFactory*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)(::Org::BouncyCastle::Crypto::IStreamCalculator*)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessage::Process)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x11d661c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>::get(), "Process", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IStreamCalculator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage.Verify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)(
    ::Org::BouncyCastle::Crmf::PKMacBuilder*, ::ArrayW<char16_t, ::Array<char16_t>*>)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessage::Verify)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x11d68f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>::get(), "Verify", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crmf::PKMacBuilder*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiMessage*& Org::BouncyCastle::Cmp::ProtectedPkiMessage::__get_pkiMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pkiMessage;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*> const& Org::BouncyCastle::Cmp::ProtectedPkiMessage::__get_pkiMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pkiMessage;
}
constexpr void Org::BouncyCastle::Cmp::ProtectedPkiMessage::__set_pkiMessage(::Org::BouncyCastle::Asn1::Cmp::PkiMessage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pkiMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessage* Org::BouncyCastle::Cmp::ProtectedPkiMessage::New_ctor(::Org::BouncyCastle::Cmp::GeneralPkiMessage* pkiMessage) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(pkiMessage));
}
inline void Org::BouncyCastle::Cmp::ProtectedPkiMessage::_ctor(::Org::BouncyCastle::Cmp::GeneralPkiMessage* pkiMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cmp::GeneralPkiMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pkiMessage);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessage* Org::BouncyCastle::Cmp::ProtectedPkiMessage::New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiMessage* pkiMessage) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(pkiMessage));
}
inline void Org::BouncyCastle::Cmp::ProtectedPkiMessage::_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiMessage* pkiMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pkiMessage);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* Org::BouncyCastle::Cmp::ProtectedPkiMessage::get_Header() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>::get(),
                                                                             "get_Header", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiBody* Org::BouncyCastle::Cmp::ProtectedPkiMessage::get_Body() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>::get(), "get_Body",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiBody*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* Org::BouncyCastle::Cmp::ProtectedPkiMessage::ToAsn1Message() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>::get(),
                                                                             "ToAsn1Message", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Cmp::ProtectedPkiMessage::get_HasPasswordBasedMacProtected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>::get(),
                                                                             "get_HasPasswordBasedMacProtected", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*> Org::BouncyCastle::Cmp::ProtectedPkiMessage::GetCertificates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>::get(),
                                                                             "GetCertificates", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*>, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Cmp::ProtectedPkiMessage::Verify(::Org::BouncyCastle::Crypto::IVerifierFactory* verifierFactory) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>::get(), "Verify", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IVerifierFactory*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, verifierFactory);
}
inline ::System::Object* Org::BouncyCastle::Cmp::ProtectedPkiMessage::Process(::Org::BouncyCastle::Crypto::IStreamCalculator* streamCalculator) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>::get(), "Process", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IStreamCalculator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, streamCalculator);
}
inline bool Org::BouncyCastle::Cmp::ProtectedPkiMessage::Verify(::Org::BouncyCastle::Crmf::PKMacBuilder* pkMacBuilder, ::ArrayW<char16_t, ::Array<char16_t>*> password) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>::get(), "Verify", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crmf::PKMacBuilder*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pkMacBuilder, password);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cmp::ProtectedPkiMessage::ProtectedPkiMessage() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
