#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/Srp/zzzz__Srp6Utilities_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities.CalculateK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(
        &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::CalculateK)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x12181fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>::get(), "CalculateK", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities.CalculateU
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*,
                                                           ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::CalculateU)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1218018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>::get(), "CalculateU", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities.CalculateX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Org::BouncyCastle::Math::BigInteger* (*)(::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Math::BigInteger*, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                               ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::CalculateX)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x1217ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>::get(), "CalculateX", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities.GeneratePrivateValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*,
                                                           ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::GeneratePrivateValue)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x12180f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>::get(), "GeneratePrivateValue", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities.ValidatePublicValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(
        &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::ValidatePublicValue)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x1217f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>::get(), "ValidatePublicValue", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities.CalculateM1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*,
                                                           ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(
        &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::CalculateM1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x121828c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>::get(), "CalculateM1", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities.CalculateM2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*,
                                                           ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(
        &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::CalculateM2)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1218348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>::get(), "CalculateM2", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities.CalculateKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(
        &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::CalculateKey)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x12183d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>::get(), "CalculateKey", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities.HashPaddedTriplet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*,
                                                           ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(
        &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::HashPaddedTriplet)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x1218f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>::get(), "HashPaddedTriplet", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities.HashPaddedPair
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*,
                                                           ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::HashPaddedPair)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1218c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>::get(), "HashPaddedPair", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities.GetPadded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::Org::BouncyCastle::Math::BigInteger*, int32_t)>(
    &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::GetPadded)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1219240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>::get(), "GetPadded", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12192dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::CalculateK(::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                                                                   ::Org::BouncyCastle::Math::BigInteger* N, ::Org::BouncyCastle::Math::BigInteger* g) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>::get(), "CalculateK", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(nullptr, ___internal_method, digest, N, g);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::CalculateU(::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                                                                   ::Org::BouncyCastle::Math::BigInteger* N, ::Org::BouncyCastle::Math::BigInteger* A,
                                                                                                                   ::Org::BouncyCastle::Math::BigInteger* B) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>::get(), "CalculateU", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(nullptr, ___internal_method, digest, N, A, B);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::CalculateX(::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                                                                   ::Org::BouncyCastle::Math::BigInteger* N, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt,
                                                                                                                   ::ArrayW<uint8_t, ::Array<uint8_t>*> identity,
                                                                                                                   ::ArrayW<uint8_t, ::Array<uint8_t>*> password) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>::get(), "CalculateX", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(nullptr, ___internal_method, digest, N, salt, identity, password);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::GeneratePrivateValue(::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                                                                             ::Org::BouncyCastle::Math::BigInteger* N,
                                                                                                                             ::Org::BouncyCastle::Math::BigInteger* g,
                                                                                                                             ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>::get(), "GeneratePrivateValue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(nullptr, ___internal_method, digest, N, g, random);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::ValidatePublicValue(::Org::BouncyCastle::Math::BigInteger* N,
                                                                                                                            ::Org::BouncyCastle::Math::BigInteger* val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>::get(), "ValidatePublicValue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(nullptr, ___internal_method, N, val);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::CalculateM1(::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                                                                    ::Org::BouncyCastle::Math::BigInteger* N, ::Org::BouncyCastle::Math::BigInteger* A,
                                                                                                                    ::Org::BouncyCastle::Math::BigInteger* B,
                                                                                                                    ::Org::BouncyCastle::Math::BigInteger* S) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>::get(), "CalculateM1", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(nullptr, ___internal_method, digest, N, A, B, S);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::CalculateM2(::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                                                                    ::Org::BouncyCastle::Math::BigInteger* N, ::Org::BouncyCastle::Math::BigInteger* A,
                                                                                                                    ::Org::BouncyCastle::Math::BigInteger* M1,
                                                                                                                    ::Org::BouncyCastle::Math::BigInteger* S) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>::get(), "CalculateM2", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(nullptr, ___internal_method, digest, N, A, M1, S);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::CalculateKey(::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                                                                     ::Org::BouncyCastle::Math::BigInteger* N,
                                                                                                                     ::Org::BouncyCastle::Math::BigInteger* S) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>::get(), "CalculateKey", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(nullptr, ___internal_method, digest, N, S);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::HashPaddedTriplet(::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                                                                          ::Org::BouncyCastle::Math::BigInteger* N,
                                                                                                                          ::Org::BouncyCastle::Math::BigInteger* n1,
                                                                                                                          ::Org::BouncyCastle::Math::BigInteger* n2,
                                                                                                                          ::Org::BouncyCastle::Math::BigInteger* n3) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>::get(), "HashPaddedTriplet", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(nullptr, ___internal_method, digest, N, n1, n2, n3);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::HashPaddedPair(::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                                                                       ::Org::BouncyCastle::Math::BigInteger* N,
                                                                                                                       ::Org::BouncyCastle::Math::BigInteger* n1,
                                                                                                                       ::Org::BouncyCastle::Math::BigInteger* n2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>::get(), "HashPaddedPair", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(nullptr, ___internal_method, digest, N, n1, n2);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::GetPadded(::Org::BouncyCastle::Math::BigInteger* n, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>::get(), "GetPadded", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, n, length);
}
inline ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>());
}
inline void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities::Srp6Utilities() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
