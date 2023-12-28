#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECDsaSigner)
namespace Org::BouncyCastle::Crypto::Parameters {
class ECKeyParameters;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ECMultiplier;
}
namespace Org::BouncyCastle::Crypto {
class IDsaExt;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaKCalculator;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class ECDsaSigner;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::ECDsaSigner);
// Type: Org.BouncyCastle.Crypto.Signers::ECDsaSigner
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1128))
// CS Name: ::Org.BouncyCastle.Crypto.Signers::ECDsaSigner*
class CORDL_TYPE ECDsaSigner : public ::System::Object {
public:
  // Declarations
  /// @brief Field kCalculator, offset 0x10, size 0x8
  __declspec(property(get = __get_kCalculator, put = __set_kCalculator))::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* kCalculator;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __get_key, put = __set_key))::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* key;

  /// @brief Field random, offset 0x20, size 0x8
  __declspec(property(get = __get_random, put = __set_random))::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Field Eight, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Eight, put = setStaticF_Eight))::Org::BouncyCastle::Math::BigInteger* Eight;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  __declspec(property(get = get_Order))::Org::BouncyCastle::Math::BigInteger* Order;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDsaExt"
  constexpr operator ::Org::BouncyCastle::Crypto::IDsaExt*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDsa"
  constexpr operator ::Org::BouncyCastle::Crypto::IDsa*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*& __get_kCalculator();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*> const& __get_kCalculator() const;

  constexpr void __set_kCalculator(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*& __get_key();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*> const& __get_key() const;

  constexpr void __set_key(::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* value);

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_random();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_random() const;

  constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  static inline void setStaticF_Eight(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Eight();

  static inline ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner* New_ctor();

  /// @brief Method .ctor addr 0xf47d98 size 0x70 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner* New_ctor(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* kCalculator);

  /// @brief Method .ctor addr 0xf47e08 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* kCalculator);

  /// @brief Method get_AlgorithmName addr 0xf47e34 size 0x40 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init addr 0xf47e74 size 0x28c virtual true final false
  inline void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method get_Order addr 0xf48100 size 0x24 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Order();

  /// @brief Method GenerateSignature addr 0xf48124 size 0x480 virtual true final false
  inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> GenerateSignature(::ArrayW<uint8_t, ::Array<uint8_t>*> message);

  /// @brief Method VerifySignature addr 0xf485a4 size 0x388 virtual true final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> message, ::Org::BouncyCastle::Math::BigInteger* r, ::Org::BouncyCastle::Math::BigInteger* s);

  /// @brief Method CalculateE addr 0xf4892c size 0xc0 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateE(::Org::BouncyCastle::Math::BigInteger* n, ::ArrayW<uint8_t, ::Array<uint8_t>*> message);

  /// @brief Method CreateBasePointMultiplier addr 0xf489ec size 0x5c virtual true final false
  inline ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateBasePointMultiplier();

  /// @brief Method GetDenominator addr 0xf48a48 size 0x94 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* GetDenominator(int32_t coordinateSystem, ::Org::BouncyCastle::Math::EC::ECPoint* p);

  /// @brief Method InitSecureRandom addr 0xf48adc size 0x70 virtual true final false
  inline ::Org::BouncyCastle::Security::SecureRandom* InitSecureRandom(bool needed, ::Org::BouncyCastle::Security::SecureRandom* provided);

  // Ctor Parameters [CppParam { name: "", ty: "ECDsaSigner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECDsaSigner(ECDsaSigner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECDsaSigner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECDsaSigner(ECDsaSigner const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECDsaSigner();

public:
  /// @brief Field kCalculator, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* ___kCalculator;

  /// @brief Field key, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* ___key;

  /// @brief Field random, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::ECDsaSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*, "Org.BouncyCastle.Crypto.Signers", "ECDsaSigner");
