#pragma once
// IWYU pragma private; include "System/Net/Security/SslServerAuthenticationOptions.hpp"
#include "System/Net/Security/zzzz__EncryptionPolicy_impl.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Security/zzzz__SslServerAuthenticationOptions_def.hpp"
#include "System/Net/Security/zzzz__EncryptionPolicy_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationMode_def.hpp"
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions.get_ClientCertificateRequired
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Security::SslServerAuthenticationOptions::*)()>(&::System::Net::Security::SslServerAuthenticationOptions::get_ClientCertificateRequired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4373dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                        "get_ClientCertificateRequired",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions.set_ClientCertificateRequired
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Security::SslServerAuthenticationOptions::*)(bool)>(&::System::Net::Security::SslServerAuthenticationOptions::set_ClientCertificateRequired)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4373dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                        "set_ClientCertificateRequired",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions.get_ServerCertificate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (::System::Net::Security::SslServerAuthenticationOptions::*)()>(&::System::Net::Security::SslServerAuthenticationOptions::get_ServerCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4373dd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                        "get_ServerCertificate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions.set_ServerCertificate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Security::SslServerAuthenticationOptions::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(&::System::Net::Security::SslServerAuthenticationOptions::set_ServerCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4373de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                        "set_ServerCertificate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions.get_EnabledSslProtocols
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Authentication::SslProtocols (::System::Net::Security::SslServerAuthenticationOptions::*)()>(&::System::Net::Security::SslServerAuthenticationOptions::get_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4373de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                        "get_EnabledSslProtocols",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions.set_EnabledSslProtocols
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Security::SslServerAuthenticationOptions::*)(::System::Security::Authentication::SslProtocols)>(&::System::Net::Security::SslServerAuthenticationOptions::set_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4373df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                        "set_EnabledSslProtocols",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Authentication::SslProtocols>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions.set_CertificateRevocationCheckMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Security::SslServerAuthenticationOptions::*)(::System::Security::Cryptography::X509Certificates::X509RevocationMode)>(&::System::Net::Security::SslServerAuthenticationOptions::set_CertificateRevocationCheckMode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4373df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                        "set_CertificateRevocationCheckMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509RevocationMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions.set_EncryptionPolicy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Security::SslServerAuthenticationOptions::*)(::System::Net::Security::EncryptionPolicy)>(&::System::Net::Security::SslServerAuthenticationOptions::set_EncryptionPolicy)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4373e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                        "set_EncryptionPolicy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::EncryptionPolicy>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Security::SslServerAuthenticationOptions::*)()>(&::System::Net::Security::SslServerAuthenticationOptions::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4373f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode& System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_get__checkCertificateRevocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____checkCertificateRevocation;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode const& System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_get__checkCertificateRevocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____checkCertificateRevocation;
}
constexpr void System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_set__checkCertificateRevocation(::System::Security::Cryptography::X509Certificates::X509RevocationMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____checkCertificateRevocation = value;
}
constexpr ::System::Security::Authentication::SslProtocols& System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_get__enabledSslProtocols()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabledSslProtocols;
}
constexpr ::System::Security::Authentication::SslProtocols const& System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_get__enabledSslProtocols() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabledSslProtocols;
}
constexpr void System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_set__enabledSslProtocols(::System::Security::Authentication::SslProtocols  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enabledSslProtocols = value;
}
constexpr ::System::Net::Security::EncryptionPolicy& System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_get__encryptionPolicy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encryptionPolicy;
}
constexpr ::System::Net::Security::EncryptionPolicy const& System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_get__encryptionPolicy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encryptionPolicy;
}
constexpr void System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_set__encryptionPolicy(::System::Net::Security::EncryptionPolicy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encryptionPolicy = value;
}
constexpr bool& System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_get__allowRenegotiation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowRenegotiation;
}
constexpr bool const& System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_get__allowRenegotiation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowRenegotiation;
}
constexpr void System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_set__allowRenegotiation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowRenegotiation = value;
}
constexpr bool& System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_get__ClientCertificateRequired_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClientCertificateRequired_k__BackingField;
}
constexpr bool const& System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_get__ClientCertificateRequired_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClientCertificateRequired_k__BackingField;
}
constexpr void System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_set__ClientCertificateRequired_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClientCertificateRequired_k__BackingField = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_get__ServerCertificate_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ServerCertificate_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate*> const& System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_get__ServerCertificate_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ServerCertificate_k__BackingField;
}
constexpr void System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_set__ServerCertificate_k__BackingField(::System::Security::Cryptography::X509Certificates::X509Certificate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ServerCertificate_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool System::Net::Security::SslServerAuthenticationOptions::get_ClientCertificateRequired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                        "get_ClientCertificateRequired",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::Security::SslServerAuthenticationOptions::set_ClientCertificateRequired(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                        "set_ClientCertificateRequired",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* System::Net::Security::SslServerAuthenticationOptions::get_ServerCertificate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                        "get_ServerCertificate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*, false>(this, ___internal_method);
}
inline void System::Net::Security::SslServerAuthenticationOptions::set_ServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                        "set_ServerCertificate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Security::Authentication::SslProtocols System::Net::Security::SslServerAuthenticationOptions::get_EnabledSslProtocols()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                        "get_EnabledSslProtocols",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Authentication::SslProtocols, false>(this, ___internal_method);
}
inline void System::Net::Security::SslServerAuthenticationOptions::set_EnabledSslProtocols(::System::Security::Authentication::SslProtocols  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                        "set_EnabledSslProtocols",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Authentication::SslProtocols>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Security::SslServerAuthenticationOptions::set_CertificateRevocationCheckMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                        "set_CertificateRevocationCheckMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509RevocationMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Security::SslServerAuthenticationOptions::set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                        "set_EncryptionPolicy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::EncryptionPolicy>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::Security::SslServerAuthenticationOptions* System::Net::Security::SslServerAuthenticationOptions::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Security::SslServerAuthenticationOptions*>());
}
inline void System::Net::Security::SslServerAuthenticationOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslServerAuthenticationOptions*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Security::SslServerAuthenticationOptions::SslServerAuthenticationOptions()   {
}
