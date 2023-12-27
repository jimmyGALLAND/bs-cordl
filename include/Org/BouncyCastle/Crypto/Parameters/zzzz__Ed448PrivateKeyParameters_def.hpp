#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Ed448PrivateKeyParameters)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
struct __Ed448__Algorithm;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed448PublicKeyParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed448PrivateKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::Ed448PrivateKeyParameters
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1020))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1044))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::Ed448PrivateKeyParameters*
class CORDL_TYPE Ed448PrivateKeyParameters : public ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
  // Declarations
  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __get_data, put = __set_data))::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  /// @brief Field cachedPublicKey, offset 0x20, size 0x8
  __declspec(property(get = __get_cachedPublicKey, put = __set_cachedPublicKey))::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* cachedPublicKey;

  /// @brief Field KeySize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_KeySize, put = setStaticF_KeySize)) int32_t KeySize;

  /// @brief Field SignatureSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_SignatureSize, put = setStaticF_SignatureSize)) int32_t SignatureSize;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_data();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_data() const;

  constexpr void __set_data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters*& __get_cachedPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters*> const& __get_cachedPublicKey() const;

  constexpr void __set_cachedPublicKey(::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* value);

  static inline void setStaticF_KeySize(int32_t value);

  static inline int32_t getStaticF_KeySize();

  static inline void setStaticF_SignatureSize(int32_t value);

  static inline int32_t getStaticF_SignatureSize();

  static inline ::Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters* New_ctor(::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method .ctor addr 0xf34b0c size 0xd0 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off);

  /// @brief Method .ctor addr 0xf34bdc size 0xc0 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off);

  static inline ::Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters* New_ctor(::System::IO::Stream* input);

  /// @brief Method .ctor addr 0xf34c9c size 0x10c virtual false final false
  inline void _ctor(::System::IO::Stream* input);

  /// @brief Method Encode addr 0xf34da8 size 0x84 virtual false final false
  inline void Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off);

  /// @brief Method GetEncoded addr 0xf34e2c size 0x5c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GeneratePublicKey addr 0xf34e88 size 0x174 virtual false final false
  inline ::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* GeneratePublicKey();

  /// @brief Method Sign addr 0xf350b8 size 0x20 virtual false final false
  inline void Sign(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__Algorithm algorithm, ::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* publicKey,
                   ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::ArrayW<uint8_t, ::Array<uint8_t>*> msg, int32_t msgOff, int32_t msgLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  /// @brief Method Sign addr 0xf350d8 size 0x22c virtual false final false
  inline void Sign(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__Algorithm algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::ArrayW<uint8_t, ::Array<uint8_t>*> msg, int32_t msgOff,
                   int32_t msgLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  // Ctor Parameters [CppParam { name: "", ty: "Ed448PrivateKeyParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Ed448PrivateKeyParameters(Ed448PrivateKeyParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Ed448PrivateKeyParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Ed448PrivateKeyParameters(Ed448PrivateKeyParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ed448PrivateKeyParameters();

public:
  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___data;

  /// @brief Field cachedPublicKey, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* ___cachedPublicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "Ed448PrivateKeyParameters");
