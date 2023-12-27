#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpLoginParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Srp6GroupParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::*)(
    ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*, ::Org::BouncyCastle::Math::BigInteger*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xfb8a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters.get_Group
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* (
    ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::get_Group)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfb8a60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters.get_Salt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::get_Salt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfb8a68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters.get_Verifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::get_Verifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfb8a70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*& Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::__get_mGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mGroup;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*> const& Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::__get_mGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mGroup;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::__set_mGroup(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::__get_mVerifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mVerifier;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::__get_mVerifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mVerifier;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::__set_mVerifier(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mVerifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::__get_mSalt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mSalt;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::__get_mSalt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mSalt;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::__set_mSalt(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mSalt)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::New_ctor(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group,
                                                                                                                                ::Org::BouncyCastle::Math::BigInteger* verifier,
                                                                                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> salt) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>(group, verifier, salt));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::_ctor(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group, ::Org::BouncyCastle::Math::BigInteger* verifier,
                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> salt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, group, verifier, salt);
}
inline ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::get_Group() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>::get(),
                                                                             "get_Group", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::get_Salt() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>::get(),
                                                                             "get_Salt", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::get_Verifier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>::get(),
                                                                             "get_Verifier", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters::TlsSrpLoginParameters() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
