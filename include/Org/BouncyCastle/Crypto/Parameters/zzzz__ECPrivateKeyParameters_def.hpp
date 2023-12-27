#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECKeyParameters_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECPrivateKeyParameters)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::ECPrivateKeyParameters
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1037))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1038))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::ECPrivateKeyParameters*
class CORDL_TYPE ECPrivateKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters {
public:
  // Declarations
  /// @brief Field d, offset 0x30, size 0x8
  __declspec(property(get = __get_d, put = __set_d))::Org::BouncyCastle::Math::BigInteger* d;

  __declspec(property(get = get_D))::Org::BouncyCastle::Math::BigInteger* D;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_d();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_d() const;

  constexpr void __set_d(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* d,
                                                                                          ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters);

  /// @brief Method .ctor addr 0xf338f0 size 0x60 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* d, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* d, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);

  /// @brief Method .ctor addr 0xf339e8 size 0xa0 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* d, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* New_ctor(::StringW algorithm, ::Org::BouncyCastle::Math::BigInteger* d,
                                                                                          ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters);

  /// @brief Method .ctor addr 0xf33950 size 0x98 virtual false final false
  inline void _ctor(::StringW algorithm, ::Org::BouncyCastle::Math::BigInteger* d, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* New_ctor(::StringW algorithm, ::Org::BouncyCastle::Math::BigInteger* d,
                                                                                          ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);

  /// @brief Method .ctor addr 0xf33a88 size 0x98 virtual false final false
  inline void _ctor(::StringW algorithm, ::Org::BouncyCastle::Math::BigInteger* d, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);

  /// @brief Method get_D addr 0xf33b20 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_D();

  /// @brief Method Equals addr 0xf33b28 size 0x9c virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0xf33bc4 size 0x58 virtual false final false
  inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* other);

  /// @brief Method GetHashCode addr 0xf33c1c size 0x40 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "ECPrivateKeyParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECPrivateKeyParameters(ECPrivateKeyParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECPrivateKeyParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECPrivateKeyParameters(ECPrivateKeyParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECPrivateKeyParameters();

public:
  /// @brief Field d, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___d;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "ECPrivateKeyParameters");
