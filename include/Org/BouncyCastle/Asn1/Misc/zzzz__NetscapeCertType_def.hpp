#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetscapeCertType)
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Misc {
class NetscapeCertType;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Misc::NetscapeCertType);
// Type: Org.BouncyCastle.Asn1.Misc::NetscapeCertType
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Misc {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(34))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(198))
// CS Name: ::Org.BouncyCastle.Asn1.Misc::NetscapeCertType*
class CORDL_TYPE NetscapeCertType : public ::Org::BouncyCastle::Asn1::DerBitString {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Asn1::Misc::NetscapeCertType* New_ctor(int32_t usage);

  /// @brief Method .ctor addr 0xf7cf84 size 0x68 virtual false final false
  inline void _ctor(int32_t usage);

  static inline ::Org::BouncyCastle::Asn1::Misc::NetscapeCertType* New_ctor(::Org::BouncyCastle::Asn1::DerBitString* usage);

  /// @brief Method .ctor addr 0xf7cfec size 0x94 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerBitString* usage);

  /// @brief Method ToString addr 0xf7d080 size 0xa8 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "NetscapeCertType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetscapeCertType(NetscapeCertType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetscapeCertType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetscapeCertType(NetscapeCertType const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetscapeCertType();

public:
  /// @brief Field SslClient offset 0xffffffff size 0x4
  static constexpr int32_t SslClient{ static_cast<int32_t>(0x80) };

  /// @brief Field SslServer offset 0xffffffff size 0x4
  static constexpr int32_t SslServer{ static_cast<int32_t>(0x40) };

  /// @brief Field Smime offset 0xffffffff size 0x4
  static constexpr int32_t Smime{ static_cast<int32_t>(0x20) };

  /// @brief Field ObjectSigning offset 0xffffffff size 0x4
  static constexpr int32_t ObjectSigning{ static_cast<int32_t>(0x10) };

  /// @brief Field Reserved offset 0xffffffff size 0x4
  static constexpr int32_t Reserved{ static_cast<int32_t>(0x8) };

  /// @brief Field SslCA offset 0xffffffff size 0x4
  static constexpr int32_t SslCA{ static_cast<int32_t>(0x4) };

  /// @brief Field SmimeCA offset 0xffffffff size 0x4
  static constexpr int32_t SmimeCA{ static_cast<int32_t>(0x2) };

  /// @brief Field ObjectSigningCA offset 0xffffffff size 0x4
  static constexpr int32_t ObjectSigningCA{ static_cast<int32_t>(0x1) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Misc::NetscapeCertType, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Misc
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Misc::NetscapeCertType);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Misc::NetscapeCertType*, "Org.BouncyCastle.Asn1.Misc", "NetscapeCertType");
