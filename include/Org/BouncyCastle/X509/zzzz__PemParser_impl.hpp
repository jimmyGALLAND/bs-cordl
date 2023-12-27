#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__PemParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::PemParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::PemParser::*)(::StringW)>(&::Org::BouncyCastle::X509::PemParser::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1174a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::PemParser*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::PemParser.ReadLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::X509::PemParser::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::X509::PemParser::ReadLine)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1174ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::PemParser*>::get(), "ReadLine", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::PemParser.ReadPemObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Sequence* (::Org::BouncyCastle::X509::PemParser::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::X509::PemParser::ReadPemObject)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x1174c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::PemParser*>::get(), "ReadPemObject", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Org::BouncyCastle::X509::PemParser::__get__header1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____header1;
}
constexpr ::StringW const& Org::BouncyCastle::X509::PemParser::__get__header1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____header1;
}
constexpr void Org::BouncyCastle::X509::PemParser::__set__header1(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____header1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Org::BouncyCastle::X509::PemParser::__get__header2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____header2;
}
constexpr ::StringW const& Org::BouncyCastle::X509::PemParser::__get__header2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____header2;
}
constexpr void Org::BouncyCastle::X509::PemParser::__set__header2(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____header2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Org::BouncyCastle::X509::PemParser::__get__footer1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____footer1;
}
constexpr ::StringW const& Org::BouncyCastle::X509::PemParser::__get__footer1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____footer1;
}
constexpr void Org::BouncyCastle::X509::PemParser::__set__footer1(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____footer1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Org::BouncyCastle::X509::PemParser::__get__footer2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____footer2;
}
constexpr ::StringW const& Org::BouncyCastle::X509::PemParser::__get__footer2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____footer2;
}
constexpr void Org::BouncyCastle::X509::PemParser::__set__footer2(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____footer2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::X509::PemParser* Org::BouncyCastle::X509::PemParser::New_ctor(::StringW type) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::X509::PemParser*>(type));
}
inline void Org::BouncyCastle::X509::PemParser::_ctor(::StringW type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::PemParser*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline ::StringW Org::BouncyCastle::X509::PemParser::ReadLine(::System::IO::Stream* inStream) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::PemParser*>::get(), "ReadLine", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, inStream);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::X509::PemParser::ReadPemObject(::System::IO::Stream* inStream) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::PemParser*>::get(), "ReadPemObject", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Sequence*, false>(this, ___internal_method, inStream);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::PemParser::PemParser() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
