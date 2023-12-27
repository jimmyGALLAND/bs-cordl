#pragma once
#include "System/IO/zzzz__IOException_impl.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__PkcsIOException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::PkcsIOException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkcs::PkcsIOException::*)(::StringW)>(
    &::Org::BouncyCastle::Pkcs::PkcsIOException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10e7298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::PkcsIOException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::PkcsIOException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkcs::PkcsIOException::*)(::StringW, ::System::Exception*)>(
    &::Org::BouncyCastle::Pkcs::PkcsIOException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10e68f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::PkcsIOException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Pkcs::PkcsIOException* Org::BouncyCastle::Pkcs::PkcsIOException::New_ctor(::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Pkcs::PkcsIOException*>(message));
}
inline void Org::BouncyCastle::Pkcs::PkcsIOException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::PkcsIOException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::Org::BouncyCastle::Pkcs::PkcsIOException* Org::BouncyCastle::Pkcs::PkcsIOException::New_ctor(::StringW message, ::System::Exception* underlying) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Pkcs::PkcsIOException*>(message, underlying));
}
inline void Org::BouncyCastle::Pkcs::PkcsIOException::_ctor(::StringW message, ::System::Exception* underlying) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::PkcsIOException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, underlying);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkcs::PkcsIOException::PkcsIOException() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
