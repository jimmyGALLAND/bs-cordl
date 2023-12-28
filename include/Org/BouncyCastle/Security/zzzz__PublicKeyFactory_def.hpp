#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PublicKeyFactory)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPublicKeyParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class PublicKeyFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::PublicKeyFactory);
// Type: Org.BouncyCastle.Security::PublicKeyFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1756))
// CS Name: ::Org.BouncyCastle.Security::PublicKeyFactory*
class CORDL_TYPE PublicKeyFactory : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Security::PublicKeyFactory* New_ctor();

  /// @brief Method .ctor addr 0x113f5dc size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method CreateKey addr 0x113f5e4 size 0x1c virtual false final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* CreateKey(::ArrayW<uint8_t, ::Array<uint8_t>*> keyInfoData);

  /// @brief Method CreateKey addr 0x1140b84 size 0x1c virtual false final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* CreateKey(::System::IO::Stream* inStr);

  /// @brief Method CreateKey addr 0x113f600 size 0x1584 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* CreateKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* keyInfo);

  /// @brief Method GetRawKey addr 0x1140e18 size 0x84 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetRawKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* keyInfo, int32_t expectedSize);

  /// @brief Method IsPkcsDHParam addr 0x1140ba0 size 0x140 virtual false final false
  static inline bool IsPkcsDHParam(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ReadPkcsDHParam addr 0x1140ce0 size 0x138 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* ReadPkcsDHParam(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algOid, ::Org::BouncyCastle::Math::BigInteger* y,
                                                                                                ::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  // Ctor Parameters [CppParam { name: "", ty: "PublicKeyFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PublicKeyFactory(PublicKeyFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PublicKeyFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PublicKeyFactory(PublicKeyFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PublicKeyFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::PublicKeyFactory, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::PublicKeyFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::PublicKeyFactory*, "Org.BouncyCastle.Security", "PublicKeyFactory");
