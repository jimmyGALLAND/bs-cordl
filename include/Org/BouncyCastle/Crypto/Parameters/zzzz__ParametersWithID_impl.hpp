#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ParametersWithID_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ParametersWithID._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::ParametersWithID::*)(
    ::Org::BouncyCastle::Crypto::ICipherParameters*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Parameters::ParametersWithID::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xf38ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ParametersWithID*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ParametersWithID._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::ParametersWithID::*)(
    ::Org::BouncyCastle::Crypto::ICipherParameters*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Parameters::ParametersWithID::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xf38ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ParametersWithID*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ParametersWithID.GetID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Parameters::ParametersWithID::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::ParametersWithID::GetID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf38f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ParametersWithID*>::get(), "GetID",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ParametersWithID.get_Parameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (::Org::BouncyCastle::Crypto::Parameters::ParametersWithID::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::ParametersWithID::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf38f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ParametersWithID*>::get(), "get_Parameters",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
constexpr Org::BouncyCastle::Crypto::Parameters::ParametersWithID::operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipherParameters*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::ICipherParameters*& Org::BouncyCastle::Crypto::Parameters::ParametersWithID::__get_parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___parameters;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ICipherParameters*> const& Org::BouncyCastle::Crypto::Parameters::ParametersWithID::__get_parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___parameters;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::ParametersWithID::__set_parameters(::Org::BouncyCastle::Crypto::ICipherParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Parameters::ParametersWithID::__get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___id;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Parameters::ParametersWithID::__get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___id;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::ParametersWithID::__set_id(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Parameters::ParametersWithID* Org::BouncyCastle::Crypto::Parameters::ParametersWithID::New_ctor(::Org::BouncyCastle::Crypto::ICipherParameters* parameters,
                                                                                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> id) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Parameters::ParametersWithID*>(parameters, id));
}
inline void Org::BouncyCastle::Crypto::Parameters::ParametersWithID::_ctor(::Org::BouncyCastle::Crypto::ICipherParameters* parameters, ::ArrayW<uint8_t, ::Array<uint8_t>*> id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ParametersWithID*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters, id);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ParametersWithID*
Org::BouncyCastle::Crypto::Parameters::ParametersWithID::New_ctor(::Org::BouncyCastle::Crypto::ICipherParameters* parameters, ::ArrayW<uint8_t, ::Array<uint8_t>*> id, int32_t idOff, int32_t idLen) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Parameters::ParametersWithID*>(parameters, id, idOff, idLen));
}
inline void Org::BouncyCastle::Crypto::Parameters::ParametersWithID::_ctor(::Org::BouncyCastle::Crypto::ICipherParameters* parameters, ::ArrayW<uint8_t, ::Array<uint8_t>*> id, int32_t idOff,
                                                                           int32_t idLen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ParametersWithID*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters, id, idOff, idLen);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Parameters::ParametersWithID::GetID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ParametersWithID*>::get(),
                                                                             "GetID", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Parameters::ParametersWithID::get_Parameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ParametersWithID*>::get(),
                                                                             "get_Parameters", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::ParametersWithID::ParametersWithID() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
