#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/PublicKeyFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Security/zzzz__PublicKeyFactory_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectPublicKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHPublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Security::PublicKeyFactory._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Security::PublicKeyFactory::*)()>(&::Org::BouncyCastle::Security::PublicKeyFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x256d810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PublicKeyFactory.CreateKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Security::PublicKeyFactory::CreateKey)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x256d818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory*>::get(),
                        "CreateKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PublicKeyFactory.CreateKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Security::PublicKeyFactory::CreateKey)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x256ed84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory*>::get(),
                        "CreateKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PublicKeyFactory.CreateKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (*)(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*)>(&::Org::BouncyCastle::Security::PublicKeyFactory::CreateKey)> {
  constexpr static std::size_t size = 0x1550;
  constexpr static std::size_t addrs = 0x256d834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory*>::get(),
                        "CreateKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PublicKeyFactory.GetRawKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (*)(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*, int32_t)>(&::Org::BouncyCastle::Security::PublicKeyFactory::GetRawKey)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x256f010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory*>::get(),
                        "GetRawKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PublicKeyFactory.IsPkcsDHParam
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Security::PublicKeyFactory::IsPkcsDHParam)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x256eda0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory*>::get(),
                        "IsPkcsDHParam",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PublicKeyFactory.ReadPkcsDHParam
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Security::PublicKeyFactory::ReadPkcsDHParam)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x256eee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory*>::get(),
                        "ReadPkcsDHParam",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Security::PublicKeyFactory* Org::BouncyCastle::Security::PublicKeyFactory::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Security::PublicKeyFactory*>());
}
inline void Org::BouncyCastle::Security::PublicKeyFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::Security::PublicKeyFactory::CreateKey(::ArrayW<uint8_t,::Array<uint8_t>*>  keyInfoData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory*>::get(),
                        "CreateKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, false>(nullptr, ___internal_method, keyInfoData);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::Security::PublicKeyFactory::CreateKey(::System::IO::Stream*  inStr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory*>::get(),
                        "CreateKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, false>(nullptr, ___internal_method, inStr);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::Security::PublicKeyFactory::CreateKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*  keyInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory*>::get(),
                        "CreateKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, false>(nullptr, ___internal_method, keyInfo);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Security::PublicKeyFactory::GetRawKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*  keyInfo, int32_t  expectedSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory*>::get(),
                        "GetRawKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(nullptr, ___internal_method, keyInfo, expectedSize);
}
inline bool Org::BouncyCastle::Security::PublicKeyFactory::IsPkcsDHParam(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory*>::get(),
                        "IsPkcsDHParam",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* Org::BouncyCastle::Security::PublicKeyFactory::ReadPkcsDHParam(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  algOid, ::Org::BouncyCastle::Math::BigInteger*  y, ::Org::BouncyCastle::Asn1::Asn1Sequence*  seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory*>::get(),
                        "ReadPkcsDHParam",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*, false>(nullptr, ___internal_method, algOid, y, seq);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Security::PublicKeyFactory::PublicKeyFactory()   {
}
