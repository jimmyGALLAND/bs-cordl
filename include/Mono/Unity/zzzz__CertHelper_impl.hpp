#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Unity/zzzz__CertHelper_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
//  Writing Method size for method: ::Mono::Unity::CertHelper.AddCertificatesToNativeChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*,
                         ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(&::Mono::Unity::CertHelper::AddCertificatesToNativeChain)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x28175e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::CertHelper*>::get(), "AddCertificatesToNativeChain", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::CertHelper.AddCertificateToNativeChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>, ::System::Security::Cryptography::X509Certificates::X509Certificate*,
                         ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(&::Mono::Unity::CertHelper::AddCertificateToNativeChain)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x28177b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::CertHelper*>::get(), "AddCertificateToNativeChain", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get() })));
    return ___internal_method;
  }
};
inline void Mono::Unity::CertHelper::AddCertificatesToNativeChain(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list> nativeCertificateChain,
                                                                  ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates,
                                                                  ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::CertHelper*>::get(), "AddCertificatesToNativeChain", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nativeCertificateChain, certificates, errorState);
}
inline void Mono::Unity::CertHelper::AddCertificateToNativeChain(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list> nativeCertificateChain,
                                                                 ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate,
                                                                 ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::CertHelper*>::get(), "AddCertificateToNativeChain", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nativeCertificateChain, certificate, errorState);
}
// Ctor Parameters []
constexpr ::Mono::Unity::CertHelper::CertHelper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
