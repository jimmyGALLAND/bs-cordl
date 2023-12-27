#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECPublicBcpgKey)
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Bcpg {
class IBcpgKey;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class ECPublicBcpgKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::ECPublicBcpgKey);
// Type: Org.BouncyCastle.Bcpg::ECPublicBcpgKey
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(565))
// CS Name: ::Org.BouncyCastle.Bcpg::ECPublicBcpgKey*
class CORDL_TYPE ECPublicBcpgKey : public ::Org::BouncyCastle::Bcpg::BcpgObject {
public:
  // Declarations
  /// @brief Field oid, offset 0x10, size 0x8
  __declspec(property(get = __get_oid, put = __set_oid))::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid;

  /// @brief Field point, offset 0x18, size 0x8
  __declspec(property(get = __get_point, put = __set_point))::Org::BouncyCastle::Math::BigInteger* point;

  __declspec(property(get = get_Format))::StringW Format;

  __declspec(property(get = get_EncodedPoint))::Org::BouncyCastle::Math::BigInteger* EncodedPoint;

  __declspec(property(get = get_CurveOid))::Org::BouncyCastle::Asn1::DerObjectIdentifier* CurveOid;

  /// @brief Convert operator to "::Org::BouncyCastle::Bcpg::IBcpgKey"
  constexpr operator ::Org::BouncyCastle::Bcpg::IBcpgKey*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_oid();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_oid() const;

  constexpr void __set_oid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_point();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_point() const;

  constexpr void __set_point(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Bcpg::ECPublicBcpgKey* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor addr 0x11d0cf0 size 0xc8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::ECPublicBcpgKey* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Math::EC::ECPoint* point);

  /// @brief Method .ctor addr 0x11d0f18 size 0xa8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Math::EC::ECPoint* point);

  static inline ::Org::BouncyCastle::Bcpg::ECPublicBcpgKey* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Math::BigInteger* encodedPoint);

  /// @brief Method .ctor addr 0x11d0fc0 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Math::BigInteger* encodedPoint);

  /// @brief Method get_Format addr 0x11d0fec size 0x40 virtual true final true
  inline ::StringW get_Format();

  /// @brief Method GetEncoded addr 0x11d102c size 0x84 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method Encode addr 0x11d10b0 size 0xb0 virtual true final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method get_EncodedPoint addr 0x11d1160 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_EncodedPoint();

  /// @brief Method get_CurveOid addr 0x11d1168 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_CurveOid();

  /// @brief Method ReadBytesOfEncodedLength addr 0x11d0db8 size 0x160 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadBytesOfEncodedLength(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  // Ctor Parameters [CppParam { name: "", ty: "ECPublicBcpgKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECPublicBcpgKey(ECPublicBcpgKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECPublicBcpgKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECPublicBcpgKey(ECPublicBcpgKey const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECPublicBcpgKey();

public:
  /// @brief Field oid, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___oid;

  /// @brief Field point, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___point;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::ECPublicBcpgKey, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::ECPublicBcpgKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::ECPublicBcpgKey*, "Org.BouncyCastle.Bcpg", "ECPublicBcpgKey");
