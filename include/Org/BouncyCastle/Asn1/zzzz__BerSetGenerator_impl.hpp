#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__BerGenerator_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerSetGenerator_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerSetGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::BerSetGenerator::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Asn1::BerSetGenerator::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x11befc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerSetGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerSetGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::BerSetGenerator::*)(::System::IO::Stream*, int32_t, bool)>(
    &::Org::BouncyCastle::Asn1::BerSetGenerator::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x11beffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerSetGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Asn1::BerSetGenerator* Org::BouncyCastle::Asn1::BerSetGenerator::New_ctor(::System::IO::Stream* outStream) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::BerSetGenerator*>(outStream));
}
inline void Org::BouncyCastle::Asn1::BerSetGenerator::_ctor(::System::IO::Stream* outStream) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerSetGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outStream);
}
inline ::Org::BouncyCastle::Asn1::BerSetGenerator* Org::BouncyCastle::Asn1::BerSetGenerator::New_ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::BerSetGenerator*>(outStream, tagNo, isExplicit));
}
inline void Org::BouncyCastle::Asn1::BerSetGenerator::_ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerSetGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outStream, tagNo, isExplicit);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::BerSetGenerator::BerSetGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
