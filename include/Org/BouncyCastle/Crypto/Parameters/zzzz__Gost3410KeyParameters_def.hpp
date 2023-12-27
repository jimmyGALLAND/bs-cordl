#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
CORDL_MODULE_EXPORT(Gost3410KeyParameters)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410Parameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410KeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::Gost3410KeyParameters
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1020))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1052))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::Gost3410KeyParameters*
class CORDL_TYPE Gost3410KeyParameters : public ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
  // Declarations
  /// @brief Field parameters, offset 0x18, size 0x8
  __declspec(property(get = __get_parameters, put = __set_parameters))::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* parameters;

  /// @brief Field publicKeyParamSet, offset 0x20, size 0x8
  __declspec(property(get = __get_publicKeyParamSet, put = __set_publicKeyParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet;

  __declspec(property(get = get_Parameters))::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* Parameters;

  __declspec(property(get = get_PublicKeyParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PublicKeyParamSet;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*& __get_parameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*> const& __get_parameters() const;

  constexpr void __set_parameters(::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* value);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_publicKeyParamSet();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_publicKeyParamSet() const;

  constexpr void __set_publicKeyParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters* New_ctor(bool isPrivate, ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* parameters);

  /// @brief Method .ctor addr 0xf35fa0 size 0x30 virtual false final false
  inline void _ctor(bool isPrivate, ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters* New_ctor(bool isPrivate, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);

  /// @brief Method .ctor addr 0xf35fd0 size 0x38 virtual false final false
  inline void _ctor(bool isPrivate, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);

  /// @brief Method get_Parameters addr 0xf36180 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* get_Parameters();

  /// @brief Method get_PublicKeyParamSet addr 0xf36188 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_PublicKeyParamSet();

  /// @brief Method LookupParameters addr 0xf36008 size 0x178 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* LookupParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);

  // Ctor Parameters [CppParam { name: "", ty: "Gost3410KeyParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gost3410KeyParameters(Gost3410KeyParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gost3410KeyParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gost3410KeyParameters(Gost3410KeyParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gost3410KeyParameters();

public:
  /// @brief Field parameters, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* ___parameters;

  /// @brief Field publicKeyParamSet, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___publicKeyParamSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "Gost3410KeyParameters");
