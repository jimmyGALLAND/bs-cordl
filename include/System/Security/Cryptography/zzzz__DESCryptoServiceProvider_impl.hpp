#pragma once
#include "System/Security/Cryptography/zzzz__DES_impl.hpp"
#include "System/Security/Cryptography/zzzz__DESCryptoServiceProvider_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::DESCryptoServiceProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DESCryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::DESCryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x245cd38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DESCryptoServiceProvider.CreateEncryptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform* (
    ::System::Security::Cryptography::DESCryptoServiceProvider::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Security::Cryptography::DESCryptoServiceProvider::CreateEncryptor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x245ce08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DESCryptoServiceProvider.CreateDecryptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform* (
    ::System::Security::Cryptography::DESCryptoServiceProvider::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Security::Cryptography::DESCryptoServiceProvider::CreateDecryptor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x245cf50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DESCryptoServiceProvider.GenerateKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DESCryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::DESCryptoServiceProvider::GenerateKey)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x245d098;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DESCryptoServiceProvider.GenerateIV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DESCryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::DESCryptoServiceProvider::GenerateIV)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x245d180;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(), 25));
    return ___internal_method;
  }
};
inline ::System::Security::Cryptography::DESCryptoServiceProvider* System::Security::Cryptography::DESCryptoServiceProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Cryptography::DESCryptoServiceProvider*>());
}
inline void System::Security::Cryptography::DESCryptoServiceProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::DESCryptoServiceProvider::CreateEncryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey,
                                                                                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(), "CreateEncryptor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*, false>(this, ___internal_method, rgbKey, rgbIV);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::DESCryptoServiceProvider::CreateDecryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey,
                                                                                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(), "CreateDecryptor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*, false>(this, ___internal_method, rgbKey, rgbIV);
}
inline void System::Security::Cryptography::DESCryptoServiceProvider::GenerateKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(),
                                                                             "GenerateKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::DESCryptoServiceProvider::GenerateIV() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(),
                                                                             "GenerateIV", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::DESCryptoServiceProvider::DESCryptoServiceProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
