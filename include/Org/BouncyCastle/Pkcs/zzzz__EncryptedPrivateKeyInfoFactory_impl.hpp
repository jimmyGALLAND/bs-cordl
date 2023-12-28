#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__EncryptedPrivateKeyInfoFactory_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__EncryptedPrivateKeyInfo_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__PrivateKeyInfo_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::*)()>(
    &::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10d6090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory.CreateEncryptedPrivateKeyInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::ArrayW<char16_t, ::Array<char16_t>*>,
                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
        &::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::CreateEncryptedPrivateKeyInfo)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x10d6098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>::get(), "CreateEncryptedPrivateKeyInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory.CreateEncryptedPrivateKeyInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* (*)(::StringW, ::ArrayW<char16_t, ::Array<char16_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t,
                                                                              ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
        &::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::CreateEncryptedPrivateKeyInfo)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x10d52a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>::get(), "CreateEncryptedPrivateKeyInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory.CreateEncryptedPrivateKeyInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* (*)(::StringW, ::ArrayW<char16_t, ::Array<char16_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t,
                                                                              ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*)>(
        &::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::CreateEncryptedPrivateKeyInfo)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x10d60ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>::get(), "CreateEncryptedPrivateKeyInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory.CreateEncryptedPrivateKeyInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*,
                                                                              ::ArrayW<char16_t, ::Array<char16_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t,
                                                                              ::Org::BouncyCastle::Security::SecureRandom*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
        &::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::CreateEncryptedPrivateKeyInfo)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x10d6390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>::get(), "CreateEncryptedPrivateKeyInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory.CreateEncryptedPrivateKeyInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*,
                                                                              ::ArrayW<char16_t, ::Array<char16_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t,
                                                                              ::Org::BouncyCastle::Security::SecureRandom*, ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*)>(
        &::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::CreateEncryptedPrivateKeyInfo)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x10d63f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>::get(), "CreateEncryptedPrivateKeyInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get() })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory* Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>());
}
inline void Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*
Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::CreateEncryptedPrivateKeyInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount,
                                                                                       ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>::get(), "CreateEncryptedPrivateKeyInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*, false>(nullptr, ___internal_method, algorithm, passPhrase, salt, iterationCount, key);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*
Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::CreateEncryptedPrivateKeyInfo(::StringW algorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount,
                                                                                       ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>::get(), "CreateEncryptedPrivateKeyInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*, false>(nullptr, ___internal_method, algorithm, passPhrase, salt, iterationCount, key);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*
Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::CreateEncryptedPrivateKeyInfo(::StringW algorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount,
                                                                                       ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* keyInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>::get(), "CreateEncryptedPrivateKeyInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*, false>(nullptr, ___internal_method, algorithm, passPhrase, salt, iterationCount, keyInfo);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::CreateEncryptedPrivateKeyInfo(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier* cipherAlgorithm, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* prfAlgorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
    ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount, ::Org::BouncyCastle::Security::SecureRandom* random, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>::get(), "CreateEncryptedPrivateKeyInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*, false>(nullptr, ___internal_method, cipherAlgorithm, prfAlgorithm, passPhrase, salt,
                                                                                                               iterationCount, random, key);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::CreateEncryptedPrivateKeyInfo(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier* cipherAlgorithm, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* prfAlgorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
    ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount, ::Org::BouncyCastle::Security::SecureRandom* random, ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* keyInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>::get(), "CreateEncryptedPrivateKeyInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*, false>(nullptr, ___internal_method, cipherAlgorithm, prfAlgorithm, passPhrase, salt,
                                                                                                               iterationCount, random, keyInfo);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::EncryptedPrivateKeyInfoFactory() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
