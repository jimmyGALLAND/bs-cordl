#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerOutputStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOutputStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::BerOutputStream::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Asn1::BerOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x11bbf2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOutputStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOutputStream.WriteObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::BerOutputStream::*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::BerOutputStream::WriteObject)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x11bd8a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOutputStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOutputStream*>::get(), 42));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Asn1::BerOutputStream* Org::BouncyCastle::Asn1::BerOutputStream::New_ctor(::System::IO::Stream* os) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::BerOutputStream*>(os));
}
inline void Org::BouncyCastle::Asn1::BerOutputStream::_ctor(::System::IO::Stream* os) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOutputStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, os);
}
inline void Org::BouncyCastle::Asn1::BerOutputStream::WriteObject(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOutputStream*>::get(), "WriteObject", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::BerOutputStream::BerOutputStream() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
