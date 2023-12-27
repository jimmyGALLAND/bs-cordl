#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EacObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Eac {
class EacObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Eac::EacObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Eac::EacObjectIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Eac {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(132))
// CS Name: ::Org.BouncyCastle.Asn1.Eac::EacObjectIdentifiers*
class CORDL_TYPE EacObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field bsi_de, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bsi_de, put = setStaticF_bsi_de))::Org::BouncyCastle::Asn1::DerObjectIdentifier* bsi_de;

  /// @brief Field id_PK, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_PK, put = setStaticF_id_PK))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_PK;

  /// @brief Field id_PK_DH, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_PK_DH, put = setStaticF_id_PK_DH))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_PK_DH;

  /// @brief Field id_PK_ECDH, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_PK_ECDH, put = setStaticF_id_PK_ECDH))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_PK_ECDH;

  /// @brief Field id_CA, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_CA, put = setStaticF_id_CA))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_CA;

  /// @brief Field id_CA_DH, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_CA_DH, put = setStaticF_id_CA_DH))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_CA_DH;

  /// @brief Field id_CA_DH_3DES_CBC_CBC, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_CA_DH_3DES_CBC_CBC, put = setStaticF_id_CA_DH_3DES_CBC_CBC))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_CA_DH_3DES_CBC_CBC;

  /// @brief Field id_CA_ECDH, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_CA_ECDH, put = setStaticF_id_CA_ECDH))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_CA_ECDH;

  /// @brief Field id_CA_ECDH_3DES_CBC_CBC, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_CA_ECDH_3DES_CBC_CBC, put = setStaticF_id_CA_ECDH_3DES_CBC_CBC))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_CA_ECDH_3DES_CBC_CBC;

  /// @brief Field id_TA, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_TA, put = setStaticF_id_TA))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_TA;

  /// @brief Field id_TA_RSA, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_TA_RSA, put = setStaticF_id_TA_RSA))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_TA_RSA;

  /// @brief Field id_TA_RSA_v1_5_SHA_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_TA_RSA_v1_5_SHA_1, put = setStaticF_id_TA_RSA_v1_5_SHA_1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_TA_RSA_v1_5_SHA_1;

  /// @brief Field id_TA_RSA_v1_5_SHA_256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_TA_RSA_v1_5_SHA_256, put = setStaticF_id_TA_RSA_v1_5_SHA_256))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_TA_RSA_v1_5_SHA_256;

  /// @brief Field id_TA_RSA_PSS_SHA_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_TA_RSA_PSS_SHA_1, put = setStaticF_id_TA_RSA_PSS_SHA_1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_TA_RSA_PSS_SHA_1;

  /// @brief Field id_TA_RSA_PSS_SHA_256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_TA_RSA_PSS_SHA_256, put = setStaticF_id_TA_RSA_PSS_SHA_256))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_TA_RSA_PSS_SHA_256;

  /// @brief Field id_TA_ECDSA, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_TA_ECDSA, put = setStaticF_id_TA_ECDSA))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_TA_ECDSA;

  /// @brief Field id_TA_ECDSA_SHA_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_TA_ECDSA_SHA_1, put = setStaticF_id_TA_ECDSA_SHA_1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_TA_ECDSA_SHA_1;

  /// @brief Field id_TA_ECDSA_SHA_224, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_TA_ECDSA_SHA_224, put = setStaticF_id_TA_ECDSA_SHA_224))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_TA_ECDSA_SHA_224;

  /// @brief Field id_TA_ECDSA_SHA_256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_TA_ECDSA_SHA_256, put = setStaticF_id_TA_ECDSA_SHA_256))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_TA_ECDSA_SHA_256;

  /// @brief Field id_TA_ECDSA_SHA_384, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_TA_ECDSA_SHA_384, put = setStaticF_id_TA_ECDSA_SHA_384))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_TA_ECDSA_SHA_384;

  /// @brief Field id_TA_ECDSA_SHA_512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_id_TA_ECDSA_SHA_512, put = setStaticF_id_TA_ECDSA_SHA_512))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id_TA_ECDSA_SHA_512;

  static inline void setStaticF_bsi_de(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bsi_de();

  static inline void setStaticF_id_PK(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_PK();

  static inline void setStaticF_id_PK_DH(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_PK_DH();

  static inline void setStaticF_id_PK_ECDH(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_PK_ECDH();

  static inline void setStaticF_id_CA(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_CA();

  static inline void setStaticF_id_CA_DH(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_CA_DH();

  static inline void setStaticF_id_CA_DH_3DES_CBC_CBC(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_CA_DH_3DES_CBC_CBC();

  static inline void setStaticF_id_CA_ECDH(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_CA_ECDH();

  static inline void setStaticF_id_CA_ECDH_3DES_CBC_CBC(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_CA_ECDH_3DES_CBC_CBC();

  static inline void setStaticF_id_TA(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_TA();

  static inline void setStaticF_id_TA_RSA(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_TA_RSA();

  static inline void setStaticF_id_TA_RSA_v1_5_SHA_1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_TA_RSA_v1_5_SHA_1();

  static inline void setStaticF_id_TA_RSA_v1_5_SHA_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_TA_RSA_v1_5_SHA_256();

  static inline void setStaticF_id_TA_RSA_PSS_SHA_1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_TA_RSA_PSS_SHA_1();

  static inline void setStaticF_id_TA_RSA_PSS_SHA_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_TA_RSA_PSS_SHA_256();

  static inline void setStaticF_id_TA_ECDSA(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_TA_ECDSA();

  static inline void setStaticF_id_TA_ECDSA_SHA_1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_TA_ECDSA_SHA_1();

  static inline void setStaticF_id_TA_ECDSA_SHA_224(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_TA_ECDSA_SHA_224();

  static inline void setStaticF_id_TA_ECDSA_SHA_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_TA_ECDSA_SHA_256();

  static inline void setStaticF_id_TA_ECDSA_SHA_384(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_TA_ECDSA_SHA_384();

  static inline void setStaticF_id_TA_ECDSA_SHA_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_TA_ECDSA_SHA_512();

  static inline ::Org::BouncyCastle::Asn1::Eac::EacObjectIdentifiers* New_ctor();

  /// @brief Method .ctor addr 0xe8e930 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EacObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EacObjectIdentifiers(EacObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EacObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EacObjectIdentifiers(EacObjectIdentifiers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EacObjectIdentifiers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Eac::EacObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Eac
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Eac::EacObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Eac::EacObjectIdentifiers*, "Org.BouncyCastle.Asn1.Eac", "EacObjectIdentifiers");
