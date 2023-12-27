#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BerBitString)
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerBitString;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::BerBitString);
// Type: Org.BouncyCastle.Asn1::BerBitString
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(34))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(475))
// CS Name: ::Org.BouncyCastle.Asn1::BerBitString*
class CORDL_TYPE BerBitString : public ::Org::BouncyCastle::Asn1::DerBitString {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Asn1::BerBitString* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t padBits);

  /// @brief Method .ctor addr 0x11bbbb8 size 0x70 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t padBits);

  static inline ::Org::BouncyCastle::Asn1::BerBitString* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor addr 0x11bbc28 size 0x68 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::Org::BouncyCastle::Asn1::BerBitString* New_ctor(int32_t namedBits);

  /// @brief Method .ctor addr 0x11bbc90 size 0x68 virtual false final false
  inline void _ctor(int32_t namedBits);

  static inline ::Org::BouncyCastle::Asn1::BerBitString* New_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method .ctor addr 0x11bbcf8 size 0x68 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method Encode addr 0x11bbd60 size 0xd4 virtual true final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  // Ctor Parameters [CppParam { name: "", ty: "BerBitString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BerBitString(BerBitString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BerBitString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BerBitString(BerBitString const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BerBitString();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BerBitString, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerBitString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerBitString*, "Org.BouncyCastle.Asn1", "BerBitString");
