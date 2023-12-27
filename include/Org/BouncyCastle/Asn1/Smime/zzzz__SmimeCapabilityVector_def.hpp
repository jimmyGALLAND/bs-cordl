#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SmimeCapabilityVector)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Smime {
class SmimeCapabilityVector;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector);
// Type: Org.BouncyCastle.Asn1.Smime::SmimeCapabilityVector
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Smime {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(296))
// CS Name: ::Org.BouncyCastle.Asn1.Smime::SmimeCapabilityVector*
class CORDL_TYPE SmimeCapabilityVector : public ::System::Object {
public:
  // Declarations
  /// @brief Field capabilities, offset 0x10, size 0x8
  __declspec(property(get = __get_capabilities, put = __set_capabilities))::Org::BouncyCastle::Asn1::Asn1EncodableVector* capabilities;

  constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector*& __get_capabilities();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1EncodableVector*> const& __get_capabilities() const;

  constexpr void __set_capabilities(::Org::BouncyCastle::Asn1::Asn1EncodableVector* value);

  /// @brief Method AddCapability addr 0x1074ae8 size 0x80 virtual false final false
  inline void AddCapability(::Org::BouncyCastle::Asn1::DerObjectIdentifier* capability);

  /// @brief Method AddCapability addr 0x1074b68 size 0x134 virtual false final false
  inline void AddCapability(::Org::BouncyCastle::Asn1::DerObjectIdentifier* capability, int32_t value);

  /// @brief Method AddCapability addr 0x1074c9c size 0x108 virtual false final false
  inline void AddCapability(::Org::BouncyCastle::Asn1::DerObjectIdentifier* capability, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  /// @brief Method ToAsn1EncodableVector addr 0x1074da4 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* ToAsn1EncodableVector();

  static inline ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector* New_ctor();

  /// @brief Method .ctor addr 0x1074dac size 0x68 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SmimeCapabilityVector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmimeCapabilityVector(SmimeCapabilityVector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmimeCapabilityVector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmimeCapabilityVector(SmimeCapabilityVector const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmimeCapabilityVector();

public:
  /// @brief Field capabilities, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1EncodableVector* ___capabilities;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Smime
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector*, "Org.BouncyCastle.Asn1.Smime", "SmimeCapabilityVector");
