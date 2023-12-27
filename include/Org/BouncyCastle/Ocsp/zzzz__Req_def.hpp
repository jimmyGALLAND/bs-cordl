#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
CORDL_MODULE_EXPORT(Req)
namespace Org::BouncyCastle::Asn1::Ocsp {
class Request;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Ocsp {
class CertificateID;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class Req;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::Req);
// Type: Org.BouncyCastle.Ocsp::Req
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1606))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1621))
// CS Name: ::Org.BouncyCastle.Ocsp::Req*
class CORDL_TYPE Req : public ::Org::BouncyCastle::X509::X509ExtensionBase {
public:
  // Declarations
  /// @brief Field req, offset 0x10, size 0x8
  __declspec(property(get = __get_req, put = __set_req))::Org::BouncyCastle::Asn1::Ocsp::Request* req;

  __declspec(property(get = get_SingleRequestExtensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* SingleRequestExtensions;

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::Request*& __get_req();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::Request*> const& __get_req() const;

  constexpr void __set_req(::Org::BouncyCastle::Asn1::Ocsp::Request* value);

  static inline ::Org::BouncyCastle::Ocsp::Req* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::Request* req);

  /// @brief Method .ctor addr 0x109fb38 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::Request* req);

  /// @brief Method GetCertID addr 0x10a4a98 size 0x6c virtual false final false
  inline ::Org::BouncyCastle::Ocsp::CertificateID* GetCertID();

  /// @brief Method get_SingleRequestExtensions addr 0x10a4b04 size 0x1c virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_SingleRequestExtensions();

  /// @brief Method GetX509Extensions addr 0x10a4b20 size 0x1c virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();

  // Ctor Parameters [CppParam { name: "", ty: "Req", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Req(Req&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Req", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Req(Req const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Req();

public:
  /// @brief Field req, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::Request* ___req;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::Req, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::Req);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::Req*, "Org.BouncyCastle.Ocsp", "Req");
