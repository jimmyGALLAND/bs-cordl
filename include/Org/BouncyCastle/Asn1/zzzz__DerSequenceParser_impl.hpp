#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerSequenceParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1StreamParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1SequenceParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerSequenceParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::DerSequenceParser::*)(::Org::BouncyCastle::Asn1::Asn1StreamParser*)>(
    &::Org::BouncyCastle::Asn1::DerSequenceParser::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x11ba3d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSequenceParser*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1StreamParser*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerSequenceParser.ReadObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible* (::Org::BouncyCastle::Asn1::DerSequenceParser::*)()>(
    &::Org::BouncyCastle::Asn1::DerSequenceParser::ReadObject)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x11c3efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSequenceParser*>::get(),
                                                                               "ReadObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerSequenceParser.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::DerSequenceParser::*)()>(
    &::Org::BouncyCastle::Asn1::DerSequenceParser::ToAsn1Object)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x11c3f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSequenceParser*>::get(),
                                                                               "ToAsn1Object", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::Asn1SequenceParser"
constexpr Org::BouncyCastle::Asn1::DerSequenceParser::operator ::Org::BouncyCastle::Asn1::Asn1SequenceParser*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::Asn1SequenceParser*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
constexpr Org::BouncyCastle::Asn1::DerSequenceParser::operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1StreamParser*& Org::BouncyCastle::Asn1::DerSequenceParser::__get__parser() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parser;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1StreamParser*> const& Org::BouncyCastle::Asn1::DerSequenceParser::__get__parser() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parser;
}
constexpr void Org::BouncyCastle::Asn1::DerSequenceParser::__set__parser(::Org::BouncyCastle::Asn1::Asn1StreamParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parser)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::DerSequenceParser* Org::BouncyCastle::Asn1::DerSequenceParser::New_ctor(::Org::BouncyCastle::Asn1::Asn1StreamParser* parser) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::DerSequenceParser*>(parser));
}
inline void Org::BouncyCastle::Asn1::DerSequenceParser::_ctor(::Org::BouncyCastle::Asn1::Asn1StreamParser* parser) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSequenceParser*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1StreamParser*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parser);
}
inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* Org::BouncyCastle::Asn1::DerSequenceParser::ReadObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSequenceParser*>::get(), "ReadObject",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IAsn1Convertible*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::DerSequenceParser::ToAsn1Object() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSequenceParser*>::get(),
                                                                             "ToAsn1Object", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::DerSequenceParser::DerSequenceParser() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
