#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__PKMacStreamCalculator_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCalculator_def.hpp"
#include "Org/BouncyCastle/Crypto/IO/zzzz__MacSink_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacStreamCalculator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crmf::PKMacStreamCalculator::*)(::Org::BouncyCastle::Crypto::IMac*)>(
    &::Org::BouncyCastle::Crmf::PKMacStreamCalculator::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1211eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacStreamCalculator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacStreamCalculator.get_Stream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Crmf::PKMacStreamCalculator::*)()>(
    &::Org::BouncyCastle::Crmf::PKMacStreamCalculator::get_Stream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1211f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacStreamCalculator*>::get(),
                                                                               "get_Stream", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacStreamCalculator.GetResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::Crmf::PKMacStreamCalculator::*)()>(
    &::Org::BouncyCastle::Crmf::PKMacStreamCalculator::GetResult)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1211f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacStreamCalculator*>::get(),
                                                                               "GetResult", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IStreamCalculator"
constexpr Org::BouncyCastle::Crmf::PKMacStreamCalculator::operator ::Org::BouncyCastle::Crypto::IStreamCalculator*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IStreamCalculator*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::IO::MacSink*& Org::BouncyCastle::Crmf::PKMacStreamCalculator::__get__stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____stream;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IO::MacSink*> const& Org::BouncyCastle::Crmf::PKMacStreamCalculator::__get__stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____stream;
}
constexpr void Org::BouncyCastle::Crmf::PKMacStreamCalculator::__set__stream(::Org::BouncyCastle::Crypto::IO::MacSink* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crmf::PKMacStreamCalculator* Org::BouncyCastle::Crmf::PKMacStreamCalculator::New_ctor(::Org::BouncyCastle::Crypto::IMac* mac) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crmf::PKMacStreamCalculator*>(mac));
}
inline void Org::BouncyCastle::Crmf::PKMacStreamCalculator::_ctor(::Org::BouncyCastle::Crypto::IMac* mac) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacStreamCalculator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mac);
}
inline ::System::IO::Stream* Org::BouncyCastle::Crmf::PKMacStreamCalculator::get_Stream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacStreamCalculator*>::get(),
                                                                             "get_Stream", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline ::System::Object* Org::BouncyCastle::Crmf::PKMacStreamCalculator::GetResult() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacStreamCalculator*>::get(),
                                                                             "GetResult", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crmf::PKMacStreamCalculator::PKMacStreamCalculator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
