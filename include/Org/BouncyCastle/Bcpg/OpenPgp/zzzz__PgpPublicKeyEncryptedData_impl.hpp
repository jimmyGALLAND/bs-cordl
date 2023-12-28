#pragma once
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpEncryptedData_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKeyEncryptedData_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPrivateKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBufferedCipher_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyEncSessionPacket_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::*)(
    ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*, ::Org::BouncyCastle::Bcpg::InputStreamPacket*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x10b85b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::InputStreamPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData.GetKeyCipher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IBufferedCipher* (*)(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::GetKeyCipher)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x10b85e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>::get(), "GetKeyCipher", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData.ConfirmCheckSum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::ConfirmCheckSum)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x10b882c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>::get(), "ConfirmCheckSum", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData.get_KeyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::get_KeyId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10b88c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>::get(), "get_KeyId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData.GetSymmetricAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::GetSymmetricAlgorithm)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x10b88e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>::get(), "GetSymmetricAlgorithm", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData.GetDataStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IO::Stream* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::GetDataStream)> {
  constexpr static std::size_t size = 0x78c;
  constexpr static std::size_t addrs = 0x10b90d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>::get(), "GetDataStream", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData.RecoverSessionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::*)(
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::RecoverSessionData)> {
  constexpr static std::size_t size = 0x7c8;
  constexpr static std::size_t addrs = 0x10b8908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>::get(), "RecoverSessionData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData.ProcessEncodedMpi
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Crypto::IBufferedCipher*, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::ProcessEncodedMpi)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x10b9d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>::get(), "ProcessEncodedMpi", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBufferedCipher*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::__get_keyData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyData;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::__get_keyData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyData;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::__set_keyData(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*
Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket* keyData, ::Org::BouncyCastle::Bcpg::InputStreamPacket* encData) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>(keyData, encData));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::_ctor(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket* keyData, ::Org::BouncyCastle::Bcpg::InputStreamPacket* encData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::InputStreamPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyData, encData);
}
inline ::Org::BouncyCastle::Crypto::IBufferedCipher* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::GetKeyCipher(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>::get(), "GetKeyCipher", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBufferedCipher*, false>(nullptr, ___internal_method, algorithm);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::ConfirmCheckSum(::ArrayW<uint8_t, ::Array<uint8_t>*> sessionInfo) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>::get(), "ConfirmCheckSum",
                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sessionInfo);
}
inline int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::get_KeyId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>::get(), "get_KeyId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag
Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::GetSymmetricAlgorithm(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* privKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>::get(), "GetSymmetricAlgorithm", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, false>(this, ___internal_method, privKey);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::GetDataStream(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* privKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>::get(), "GetDataStream", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, privKey);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::RecoverSessionData(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* privKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>::get(), "RecoverSessionData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, privKey);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::ProcessEncodedMpi(::Org::BouncyCastle::Crypto::IBufferedCipher* cipher, int32_t size,
                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> mpiEnc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>::get(), "ProcessEncodedMpi", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBufferedCipher*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cipher, size, mpiEnc);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::PgpPublicKeyEncryptedData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
