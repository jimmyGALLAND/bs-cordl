#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__DerIA5String_impl.hpp"
#include "Org/BouncyCastle/Asn1/Misc/zzzz__NetscapeRevocationUrl_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerIA5String_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl::*)(::Org::BouncyCastle::Asn1::DerIA5String*)>(
    &::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xf7d400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerIA5String*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl::*)()>(
    &::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl::ToString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xf7d438;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl*>::get(), 3));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl* Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl::New_ctor(::Org::BouncyCastle::Asn1::DerIA5String* str) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl*>(str));
}
inline void Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl::_ctor(::Org::BouncyCastle::Asn1::DerIA5String* str) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerIA5String*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, str);
}
inline ::StringW Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl*>::get(),
                                                                             "ToString", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl::NetscapeRevocationUrl() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
