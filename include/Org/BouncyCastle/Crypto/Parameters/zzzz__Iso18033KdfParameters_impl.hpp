#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Iso18033KdfParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xf36d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters.GetSeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::GetSeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf36d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters*>::get(), "GetSeed",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationParameters"
constexpr Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::operator ::Org::BouncyCastle::Crypto::IDerivationParameters*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationParameters*>(static_cast<void*>(this));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::__get_seed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seed;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::__get_seed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seed;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::__set_seed(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___seed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters* Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> seed) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters*>(seed));
}
inline void Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> seed) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seed);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::GetSeed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters*>::get(), "GetSeed",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::Iso18033KdfParameters() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
