#pragma once
#include "Org/BouncyCastle/Crypto/Generators/zzzz__DesKeyGenerator_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__DesEdeKeyGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xef6f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xef6f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator.engineInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::*)(
    ::Org::BouncyCastle::Crypto::KeyGenerationParameters*)>(&::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::engineInit)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xef6f48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator.engineGenerateKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::engineGenerateKey)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xef7178;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator*>::get(), 5));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator* Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator*>());
}
inline void Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator* Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::New_ctor(int32_t defaultStrength) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator*>(defaultStrength));
}
inline void Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::_ctor(int32_t defaultStrength) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, defaultStrength);
}
inline void Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::engineInit(::Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator*>::get(), "engineInit", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::KeyGenerationParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::engineGenerateKey() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator*>::get(), "engineGenerateKey",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::DesEdeKeyGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
