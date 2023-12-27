#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(TlsAuthentication)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAuthentication;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsAuthentication);
// Type: Org.BouncyCastle.Crypto.Tls::TlsAuthentication
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1269))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsAuthentication*
class CORDL_TYPE TlsAuthentication {
public:
  // Declarations
  /// @brief Method NotifyServerCertificate addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void NotifyServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate);

  /// @brief Method GetClientCredentials addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* GetClientCredentials(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest);

  // Ctor Parameters [CppParam { name: "", ty: "TlsAuthentication", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsAuthentication(TlsAuthentication&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsAuthentication", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsAuthentication(TlsAuthentication const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsAuthentication);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*, "Org.BouncyCastle.Crypto.Tls", "TlsAuthentication");
