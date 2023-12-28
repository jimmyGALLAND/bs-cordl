#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Asn1SignatureFactory)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class Asn1SignatureFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::Asn1SignatureFactory);
// Type: Org.BouncyCastle.Crypto.Operators::Asn1SignatureFactory
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(992))
// CS Name: ::Org.BouncyCastle.Crypto.Operators::Asn1SignatureFactory*
class CORDL_TYPE Asn1SignatureFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Field algID, offset 0x10, size 0x8
  __declspec(property(get = __get_algID, put = __set_algID))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID;

  /// @brief Field algorithm, offset 0x18, size 0x8
  __declspec(property(get = __get_algorithm, put = __set_algorithm))::StringW algorithm;

  /// @brief Field privateKey, offset 0x20, size 0x8
  __declspec(property(get = __get_privateKey, put = __set_privateKey))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey;

  /// @brief Field random, offset 0x28, size 0x8
  __declspec(property(get = __get_random, put = __set_random))::Org::BouncyCastle::Security::SecureRandom* random;

  __declspec(property(get = get_AlgorithmDetails))::System::Object* AlgorithmDetails;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISignatureFactory"
  constexpr operator ::Org::BouncyCastle::Crypto::ISignatureFactory*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_algID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_algID() const;

  constexpr void __set_algID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::StringW& __get_algorithm();

  constexpr ::StringW const& __get_algorithm() const;

  constexpr void __set_algorithm(::StringW value);

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __get_privateKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& __get_privateKey() const;

  constexpr void __set_privateKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_random();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_random() const;

  constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  static inline ::Org::BouncyCastle::Crypto::Operators::Asn1SignatureFactory* New_ctor(::StringW algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  /// @brief Method .ctor addr 0xf2ca94 size 0x8 virtual false final false
  inline void _ctor(::StringW algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  static inline ::Org::BouncyCastle::Crypto::Operators::Asn1SignatureFactory* New_ctor(::StringW algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                                       ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method .ctor addr 0xf2ca9c size 0x158 virtual false final false
  inline void _ctor(::StringW algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method get_AlgorithmDetails addr 0xf2cbf4 size 0x8 virtual true final true
  inline ::System::Object* get_AlgorithmDetails();

  /// @brief Method CreateCalculator addr 0xf2cbfc size 0xb4 virtual true final true
  inline ::Org::BouncyCastle::Crypto::IStreamCalculator* CreateCalculator();

  /// @brief Method get_SignatureAlgNames addr 0xf2cd2c size 0x4c virtual false final false
  static inline ::System::Collections::IEnumerable* get_SignatureAlgNames();

  // Ctor Parameters [CppParam { name: "", ty: "Asn1SignatureFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1SignatureFactory(Asn1SignatureFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1SignatureFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1SignatureFactory(Asn1SignatureFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1SignatureFactory();

public:
  /// @brief Field algID, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___algID;

  /// @brief Field algorithm, offset: 0x18, size: 0x8, def value: None
  ::StringW ___algorithm;

  /// @brief Field privateKey, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___privateKey;

  /// @brief Field random, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::Asn1SignatureFactory, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::Asn1SignatureFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::Asn1SignatureFactory*, "Org.BouncyCastle.Crypto.Operators", "Asn1SignatureFactory");
