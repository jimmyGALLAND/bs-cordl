#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/zzzz__X509PalImpl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ContentType_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyStorageFlags_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafePasswordHandle_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Impl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateImpl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Mono::X509PalImpl.Import
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (::Mono::X509PalImpl::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::X509PalImpl::Import)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::X509PalImpl.Import
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (
    ::Mono::X509PalImpl::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(
    &::Mono::X509PalImpl::Import)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::X509PalImpl.Import
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (
    ::Mono::X509PalImpl::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(&::Mono::X509PalImpl::Import)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::X509PalImpl.PEM
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::X509PalImpl::PEM)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2816ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get(), "PEM", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::X509PalImpl.ConvertData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::X509PalImpl::ConvertData)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2817024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get(), "ConvertData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::X509PalImpl.ImportFallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (::Mono::X509PalImpl::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::X509PalImpl::ImportFallback)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x28166ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get(), "ImportFallback", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::X509PalImpl.ImportFallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (
    ::Mono::X509PalImpl::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(
    &::Mono::X509PalImpl::ImportFallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x281697c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get(), "ImportFallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::X509PalImpl.get_SupportsLegacyBasicConstraintsExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::X509PalImpl::*)()>(&::Mono::X509PalImpl::get_SupportsLegacyBasicConstraintsExtension)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2817130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get(),
                                                                               "get_SupportsLegacyBasicConstraintsExtension", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::X509PalImpl.GetCertContentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Security::Cryptography::X509Certificates::X509ContentType (::Mono::X509PalImpl::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::X509PalImpl::GetCertContentType)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x2817138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get(), "GetCertContentType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::X509PalImpl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::X509PalImpl::*)()>(&::Mono::X509PalImpl::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2816ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void Mono::X509PalImpl::setStaticF_signedData(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "signedData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::X509PalImpl::getStaticF_signedData() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "signedData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get>();
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Mono::X509PalImpl::Import(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get(), "Import", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*, false>(this, ___internal_method, data);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Mono::X509PalImpl::Import(::ArrayW<uint8_t, ::Array<uint8_t>*> data,
                                                                                                           ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                                                                                           ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get(), "Import", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*, false>(this, ___internal_method, data, password, keyStorageFlags);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Mono::X509PalImpl::Import(::System::Security::Cryptography::X509Certificates::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get(), "Import", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*, false>(this, ___internal_method, cert);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::X509PalImpl::PEM(::StringW type, ::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get(), "PEM", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, type, data);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::X509PalImpl::ConvertData(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get(), "ConvertData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, data);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Mono::X509PalImpl::ImportFallback(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get(), "ImportFallback", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*, false>(this, ___internal_method, data);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*
Mono::X509PalImpl::ImportFallback(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                  ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get(), "ImportFallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*, false>(this, ___internal_method, data, password, keyStorageFlags);
}
inline bool Mono::X509PalImpl::get_SupportsLegacyBasicConstraintsExtension() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get(),
                                                                             "get_SupportsLegacyBasicConstraintsExtension", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509ContentType Mono::X509PalImpl::GetCertContentType(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get(), "GetCertContentType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ContentType, false>(this, ___internal_method, rawData);
}
inline ::Mono::X509PalImpl* Mono::X509PalImpl::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::X509PalImpl*>());
}
inline void Mono::X509PalImpl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImpl*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::X509PalImpl::X509PalImpl() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
