#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MonoSslAuthenticationOptions)
namespace System::Security::Cryptography::X509Certificates {
struct X509RevocationMode;
}
namespace System::Net::Security {
struct EncryptionPolicy;
}
namespace System::Net::Security {
class ServerCertSelectionCallback;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
// Forward declare root types
namespace Mono::Net::Security {
class MonoSslAuthenticationOptions;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::MonoSslAuthenticationOptions);
// Type: Mono.Net.Security::MonoSslAuthenticationOptions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8839))
// CS Name: ::Mono.Net.Security::MonoSslAuthenticationOptions*
class CORDL_TYPE MonoSslAuthenticationOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field <ServerCertSelectionDelegate>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__ServerCertSelectionDelegate_k__BackingField,
                      put = __set__ServerCertSelectionDelegate_k__BackingField))::System::Net::Security::ServerCertSelectionCallback* _ServerCertSelectionDelegate_k__BackingField;

  __declspec(property(get = get_ServerMode)) bool ServerMode;

  __declspec(property(get = get_EnabledSslProtocols, put = set_EnabledSslProtocols))::System::Security::Authentication::SslProtocols EnabledSslProtocols;

  __declspec(property(put = set_EncryptionPolicy))::System::Net::Security::EncryptionPolicy EncryptionPolicy;

  __declspec(property(put = set_CertificateRevocationCheckMode))::System::Security::Cryptography::X509Certificates::X509RevocationMode CertificateRevocationCheckMode;

  __declspec(property(get = get_TargetHost, put = set_TargetHost))::StringW TargetHost;

  __declspec(property(get = get_ServerCertificate, put = set_ServerCertificate))::System::Security::Cryptography::X509Certificates::X509Certificate* ServerCertificate;

  __declspec(property(get = get_ClientCertificates, put = set_ClientCertificates))::System::Security::Cryptography::X509Certificates::X509CertificateCollection* ClientCertificates;

  __declspec(property(get = get_ClientCertificateRequired, put = set_ClientCertificateRequired)) bool ClientCertificateRequired;

  __declspec(property(get = get_ServerCertSelectionDelegate))::System::Net::Security::ServerCertSelectionCallback* ServerCertSelectionDelegate;

  constexpr ::System::Net::Security::ServerCertSelectionCallback*& __get__ServerCertSelectionDelegate_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::ServerCertSelectionCallback*> const& __get__ServerCertSelectionDelegate_k__BackingField() const;

  constexpr void __set__ServerCertSelectionDelegate_k__BackingField(::System::Net::Security::ServerCertSelectionCallback* value);

  /// @brief Method get_ServerMode addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_ServerMode();

  /// @brief Method get_EnabledSslProtocols addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Security::Authentication::SslProtocols get_EnabledSslProtocols();

  /// @brief Method set_EnabledSslProtocols addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_EnabledSslProtocols(::System::Security::Authentication::SslProtocols value);

  /// @brief Method set_EncryptionPolicy addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy value);

  /// @brief Method set_CertificateRevocationCheckMode addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_CertificateRevocationCheckMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode value);

  /// @brief Method get_TargetHost addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_TargetHost();

  /// @brief Method set_TargetHost addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_TargetHost(::StringW value);

  /// @brief Method get_ServerCertificate addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* get_ServerCertificate();

  /// @brief Method set_ServerCertificate addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_ServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value);

  /// @brief Method get_ClientCertificates addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates();

  /// @brief Method set_ClientCertificates addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_ClientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);

  /// @brief Method get_ClientCertificateRequired addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_ClientCertificateRequired();

  /// @brief Method set_ClientCertificateRequired addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_ClientCertificateRequired(bool value);

  /// @brief Method get_ServerCertSelectionDelegate addr 0x2823f84 size 0x8 virtual false final false
  inline ::System::Net::Security::ServerCertSelectionCallback* get_ServerCertSelectionDelegate();

  static inline ::Mono::Net::Security::MonoSslAuthenticationOptions* New_ctor();

  /// @brief Method .ctor addr 0x2823f8c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MonoSslAuthenticationOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoSslAuthenticationOptions(MonoSslAuthenticationOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoSslAuthenticationOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoSslAuthenticationOptions(MonoSslAuthenticationOptions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoSslAuthenticationOptions();

public:
  /// @brief Field <ServerCertSelectionDelegate>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Security::ServerCertSelectionCallback* ____ServerCertSelectionDelegate_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::MonoSslAuthenticationOptions, 0x18>, "Size mismatch!");

} // namespace Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::MonoSslAuthenticationOptions);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MonoSslAuthenticationOptions*, "Mono.Net.Security", "MonoSslAuthenticationOptions");
