#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityTlsConversions)
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatusFlags;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_x509verify_result;
}
namespace Mono::Security::Interface {
struct TlsProtocols;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_protocol;
}
namespace Mono::Security::Interface {
struct AlertDescription;
}
namespace System::Net::Security {
struct SslPolicyErrors;
}
// Forward declare root types
namespace Mono::Unity {
class UnityTlsConversions;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Unity::UnityTlsConversions);
// Type: Mono.Unity::UnityTlsConversions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Unity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8811))
// CS Name: ::Mono.Unity::UnityTlsConversions*
class CORDL_TYPE UnityTlsConversions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetMinProtocol addr 0x281a884 size 0x38 virtual false final false
  static inline ::Mono::Unity::__UnityTls__unitytls_protocol GetMinProtocol(::System::Security::Authentication::SslProtocols protocols);

  /// @brief Method GetMaxProtocol addr 0x281a8bc size 0x38 virtual false final false
  static inline ::Mono::Unity::__UnityTls__unitytls_protocol GetMaxProtocol(::System::Security::Authentication::SslProtocols protocols);

  /// @brief Method ConvertProtocolVersion addr 0x281b5d4 size 0x20 virtual false final false
  static inline ::Mono::Security::Interface::TlsProtocols ConvertProtocolVersion(::Mono::Unity::__UnityTls__unitytls_protocol protocol);

  /// @brief Method VerifyResultToAlertDescription addr 0x2817bd4 size 0x54 virtual false final false
  static inline ::Mono::Security::Interface::AlertDescription VerifyResultToAlertDescription(::Mono::Unity::__UnityTls__unitytls_x509verify_result verifyResult,
                                                                                             ::Mono::Security::Interface::AlertDescription defaultAlert);

  /// @brief Method VerifyResultToPolicyErrror addr 0x281caa8 size 0x30 virtual false final false
  static inline ::System::Net::Security::SslPolicyErrors VerifyResultToPolicyErrror(::Mono::Unity::__UnityTls__unitytls_x509verify_result verifyResult);

  /// @brief Method VerifyResultToChainStatus addr 0x281cad8 size 0x40 virtual false final false
  static inline ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags VerifyResultToChainStatus(::Mono::Unity::__UnityTls__unitytls_x509verify_result verifyResult);

  // Ctor Parameters [CppParam { name: "", ty: "UnityTlsConversions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityTlsConversions(UnityTlsConversions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityTlsConversions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityTlsConversions(UnityTlsConversions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityTlsConversions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::UnityTlsConversions, 0x10>, "Size mismatch!");

} // namespace Mono::Unity
NEED_NO_BOX(::Mono::Unity::UnityTlsConversions);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::UnityTlsConversions*, "Mono.Unity", "UnityTlsConversions");
