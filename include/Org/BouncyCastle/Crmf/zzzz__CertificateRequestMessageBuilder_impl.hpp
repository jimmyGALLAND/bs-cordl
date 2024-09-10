#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crmf/CertificateRequestMessageBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__CertificateRequestMessageBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__CertTemplateBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__PKMacValue_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__PopoPrivKey_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__SubsequentMessage_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectPublicKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__Time_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509ExtensionsGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Null_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__CertificateRequestMessage_def.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__IControl_def.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__PKMacBuilder_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignatureFactory_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x26367ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetPublicKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* (::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*)>(&::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetPublicKey)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2636884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetPublicKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetIssuer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* (::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(&::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetIssuer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26368b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetIssuer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetSubject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* (::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(&::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetSubject)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26368e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetSubject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetSerialNumber
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* (::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetSerialNumber)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2636914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetSerialNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetValidity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* (::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(::Org::BouncyCastle::Asn1::X509::Time*, ::Org::BouncyCastle::Asn1::X509::Time*)>(&::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetValidity)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x26369a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetValidity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::Time*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::Time*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.AddExtension
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* (::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, bool, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::AddExtension)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2636a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "AddExtension",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.AddExtension
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* (::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, bool, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::AddExtension)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2636a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "AddExtension",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.AddControl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* (::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(::Org::BouncyCastle::Crmf::IControl*)>(&::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::AddControl)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2636a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "AddControl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crmf::IControl*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetProofOfPossessionSignKeySigner
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* (::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(::Org::BouncyCastle::Crypto::ISignatureFactory*)>(&::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetProofOfPossessionSignKeySigner)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2636b3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetProofOfPossessionSignKeySigner",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISignatureFactory*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetProofOfPossessionSubsequentMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* (::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*)>(&::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetProofOfPossessionSubsequentMessage)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2636bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetProofOfPossessionSubsequentMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetProofOfPossessionSubsequentMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* (::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(int32_t, ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*)>(&::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetProofOfPossessionSubsequentMessage)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2636c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetProofOfPossessionSubsequentMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetProofOfPossessionAgreeMac
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* (::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(::Org::BouncyCastle::Asn1::Crmf::PKMacValue*)>(&::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetProofOfPossessionAgreeMac)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2636d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetProofOfPossessionAgreeMac",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Crmf::PKMacValue*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetProofOfPossessionRaVerified
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* (::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)()>(&::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetProofOfPossessionRaVerified)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2636dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetProofOfPossessionRaVerified",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetAuthInfoPKMAC
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* (::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(::Org::BouncyCastle::Crmf::PKMacBuilder*, ::ArrayW<char16_t,::Array<char16_t>*>)>(&::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetAuthInfoPKMAC)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2636eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetAuthInfoPKMAC",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crmf::PKMacBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetAuthInfoSender
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* (::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(&::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetAuthInfoSender)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2636ec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetAuthInfoSender",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetAuthInfoSender
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* (::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(::Org::BouncyCastle::Asn1::X509::GeneralName*)>(&::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetAuthInfoSender)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2636f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetAuthInfoSender",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.Build
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crmf::CertificateRequestMessage* (::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)()>(&::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::Build)> {
  constexpr static std::size_t size = 0x96c;
  constexpr static std::size_t addrs = 0x2636f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "Build",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_get__certReqId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____certReqId;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_get__certReqId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____certReqId;
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_set__certReqId(::Org::BouncyCastle::Math::BigInteger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____certReqId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator*& Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_get__extGenerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extGenerator;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator*> const& Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_get__extGenerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extGenerator;
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_set__extGenerator(::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____extGenerator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*& Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_get__templateBuilder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____templateBuilder;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*> const& Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_get__templateBuilder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____templateBuilder;
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_set__templateBuilder(::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____templateBuilder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_get__controls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controls;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_get__controls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controls;
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_set__controls(::System::Collections::IList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____controls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::ISignatureFactory*& Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_get__popSigner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____popSigner;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ISignatureFactory*> const& Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_get__popSigner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____popSigner;
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_set__popSigner(::Org::BouncyCastle::Crypto::ISignatureFactory*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____popSigner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crmf::PKMacBuilder*& Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_get__pkMacBuilder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pkMacBuilder;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crmf::PKMacBuilder*> const& Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_get__pkMacBuilder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pkMacBuilder;
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_set__pkMacBuilder(::Org::BouncyCastle::Crmf::PKMacBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pkMacBuilder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*>& Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_get__password()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____password;
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_get__password() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____password;
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_set__password(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____password)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_get__sender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sender;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_get__sender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sender;
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_set__sender(::Org::BouncyCastle::Asn1::X509::GeneralName*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sender)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_get__popoType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____popoType;
}
constexpr int32_t const& Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_get__popoType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____popoType;
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_set__popoType(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____popoType = value;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey*& Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_get__popoPrivKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____popoPrivKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey*> const& Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_get__popoPrivKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____popoPrivKey;
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_set__popoPrivKey(::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____popoPrivKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Null*& Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_get__popRaVerified()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____popRaVerified;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Null*> const& Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_get__popRaVerified() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____popRaVerified;
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_set__popRaVerified(::Org::BouncyCastle::Asn1::Asn1Null*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____popRaVerified)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::PKMacValue*& Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_get__agreeMac()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____agreeMac;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::PKMacValue*> const& Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_get__agreeMac() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____agreeMac;
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__cordl_internal_set__agreeMac(::Org::BouncyCastle::Asn1::Crmf::PKMacValue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____agreeMac)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::New_ctor(::Org::BouncyCastle::Math::BigInteger*  certReqId)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>(certReqId));
}
inline void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::_ctor(::Org::BouncyCastle::Math::BigInteger*  certReqId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certReqId);
}
inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetPublicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*  publicKeyInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetPublicKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*, false>(this, ___internal_method, publicKeyInfo);
}
inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetIssuer(::Org::BouncyCastle::Asn1::X509::X509Name*  issuer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetIssuer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*, false>(this, ___internal_method, issuer);
}
inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetSubject(::Org::BouncyCastle::Asn1::X509::X509Name*  subject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetSubject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*, false>(this, ___internal_method, subject);
}
inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetSerialNumber(::Org::BouncyCastle::Math::BigInteger*  serialNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetSerialNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*, false>(this, ___internal_method, serialNumber);
}
inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetValidity(::Org::BouncyCastle::Asn1::X509::Time*  notBefore, ::Org::BouncyCastle::Asn1::X509::Time*  notAfter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetValidity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::Time*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::Time*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*, false>(this, ___internal_method, notBefore, notAfter);
}
inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid, bool  critical, ::Org::BouncyCastle::Asn1::Asn1Encodable*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "AddExtension",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*, false>(this, ___internal_method, oid, critical, value);
}
inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid, bool  critical, ::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "AddExtension",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*, false>(this, ___internal_method, oid, critical, value);
}
inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::AddControl(::Org::BouncyCastle::Crmf::IControl*  control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "AddControl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crmf::IControl*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*, false>(this, ___internal_method, control);
}
inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetProofOfPossessionSignKeySigner(::Org::BouncyCastle::Crypto::ISignatureFactory*  popoSignatureFactory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetProofOfPossessionSignKeySigner",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISignatureFactory*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*, false>(this, ___internal_method, popoSignatureFactory);
}
inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetProofOfPossessionSubsequentMessage(::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*  msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetProofOfPossessionSubsequentMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*, false>(this, ___internal_method, msg);
}
inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetProofOfPossessionSubsequentMessage(int32_t  type, ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*  msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetProofOfPossessionSubsequentMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*, false>(this, ___internal_method, type, msg);
}
inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetProofOfPossessionAgreeMac(::Org::BouncyCastle::Asn1::Crmf::PKMacValue*  macValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetProofOfPossessionAgreeMac",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Crmf::PKMacValue*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*, false>(this, ___internal_method, macValue);
}
inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetProofOfPossessionRaVerified()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetProofOfPossessionRaVerified",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetAuthInfoPKMAC(::Org::BouncyCastle::Crmf::PKMacBuilder*  pkmacFactory, ::ArrayW<char16_t,::Array<char16_t>*>  password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetAuthInfoPKMAC",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crmf::PKMacBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*, false>(this, ___internal_method, pkmacFactory, password);
}
inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetAuthInfoSender(::Org::BouncyCastle::Asn1::X509::X509Name*  sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetAuthInfoSender",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*, false>(this, ___internal_method, sender);
}
inline ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetAuthInfoSender(::Org::BouncyCastle::Asn1::X509::GeneralName*  sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "SetAuthInfoSender",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*, false>(this, ___internal_method, sender);
}
inline ::Org::BouncyCastle::Crmf::CertificateRequestMessage* Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::Build()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*>::get(),
                        "Build",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::CertificateRequestMessage*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::CertificateRequestMessageBuilder()   {
}
