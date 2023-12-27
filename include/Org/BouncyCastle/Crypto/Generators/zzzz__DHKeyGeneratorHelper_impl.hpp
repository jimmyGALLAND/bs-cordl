#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__DHKeyGeneratorHelper_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xef762c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper.CalculatePrivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (
    ::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::*)(::Org::BouncyCastle::Crypto::Parameters::DHParameters*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::CalculatePrivate)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xef7434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*>::get(), "CalculatePrivate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper.CalculatePublic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (
    ::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::*)(::Org::BouncyCastle::Crypto::Parameters::DHParameters*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::CalculatePublic)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xef75f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*>::get(), "CalculatePublic", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::setStaticF_Instance(::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*>::get>(
      std::forward<::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*>(value));
}
inline ::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper* Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*>::get>();
}
inline ::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper* Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*>());
}
inline void Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::CalculatePrivate(::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams,
                                                                                                                            ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*>::get(), "CalculatePrivate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method, dhParams, random);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::CalculatePublic(::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams,
                                                                                                                           ::Org::BouncyCastle::Math::BigInteger* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*>::get(), "CalculatePublic", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method, dhParams, x);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::DHKeyGeneratorHelper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
